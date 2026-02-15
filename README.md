# RISC-V Test SoC
RISC-V Test SoC – Simulation Setup Guide

This guide explains how to set up a clean Linux environment and run the SystemC + Verilator simulation for the RISC-V Test SoC.

Target platform: Ubuntu 22.04 / 24.04 (WSL also works)

## Cloning
```
# Clone repository and submodules
git clone https://github.com/tusharshenoy/riscv_soc.git --recursive
```
---

# 1. Overview

The simulation environment requires:

| Tool            | Purpose                    |
| --------------- | -------------------------- |
| GCC / G++       | C++ compilation            |
| Make            | Build system               |
| Verilator       | RTL → SystemC model        |
| SystemC 2.3.3   | SystemC kernel             |
| libelf + libbfd | ELF loader support         |
| Flex / Bison    | Verilator build dependency |

We will build:

* ISA simulator library
* Verilated RTL model
* SystemC testbench
* Run a sample ELF (`basic.elf`)

---

# 2. Install Base Packages

```bash
sudo apt update
sudo apt install -y \
    build-essential \
    gcc \
    g++ \
    make \
    git \
    python3 \
    autoconf \
    perl \
    libelf-dev \
    libfl-dev \
    bison \
    flex \
    cmake \
    libbfd-dev \
    ccache
```

Sanity check:

```bash
gcc --version
make --version
```

Install

```bash
sudo apt install help2man
```
---

# 3. Install Verilator

Install from source (recommended for SystemC support).

```bash
cd ~
git clone https://github.com/verilator/verilator.git
cd verilator
git checkout v5.020   # or stable tag
autoconf
./configure
make -j$(nproc)
sudo make install
```

Verify:

```bash
verilator --version
```

---

# 4. Install SystemC 2.3.3

```bash
cd ~

wget https://www.accellera.org/images/downloads/standards/systemc/systemc-2.3.3.tar.gz
tar -xf systemc-2.3.3.tar.gz
cd systemc-2.3.3

mkdir build
cd build

cmake .. \
  -DCMAKE_INSTALL_PREFIX=/opt/systemc \
  -DCMAKE_CXX_STANDARD=17 \
  -DCMAKE_CXX_FLAGS="-O2 -fPIC"

make -j$(nproc)

sudo make install

```

Set environment variables:

```bash
echo 'export SYSTEMC_HOME=/opt/systemc' >> ~/.bashrc
echo 'export LD_LIBRARY_PATH=/opt/systemc/lib:$LD_LIBRARY_PATH' >> ~/.bashrc
source ~/.bashrc
```

Verify:

```bash
ls $SYSTEMC_HOME/include/systemc
```

---

# 5. Clone the SoC Repository

```bash
cd ~
git clone https://github.com/tusharshenoy/riscv_soc.git
cd riscv_soc
```

Verify submodules:

```bash
ls core/riscv
```

---

# 6. Build the Simulation

Navigate to the testbench:

```bash
cd core/isa_sim
make clean
make
```

Build everything:

```bash

cd ../tb
make clean
make
```

This builds:

* ISA simulation library
* Verilated RTL model
* SystemC wrapper
* Final executable: `build/test.x`

---

# 7. Run the Simulation

```bash
make run
```

Or manually:

```bash
./build/test.x -f ../core/isa_sim/images/basic.elf
```

Expected output:

```
SystemC 2.3.3-Accellera
Memory: ...
Starting from 0x00002000

Test:
1. Initialised data
2. Multiply
3. Divide
...
```

If you see this, the SoC is running correctly.

---

# 8. Waveform Generation (Optional)

Simulation automatically generates:

```
verilator.vcd
```

Open with GTKWave:

```bash
sudo apt install gtkwave
gtkwave verilator.vcd
```



---
## Programming Arty Board using WSL 

## 1️⃣ Install usbipd (One time in Windows – PowerShell as Admin)

```powershell
winget install usbipd
```

After install, reboot once.

---

## 2️⃣ List USB Devices (Windows CMD or PowerShell)

```powershell
usbipd list
```

You’ll see something like:

```
BUSID  VID:PID    DEVICE                                                        STATE
2-1    10C4:EA60  Silicon Labs CP210x USB to UART Bridge                       Not attached
3-2    0403:6010  FTDI FT2232H Dual USB-UART/FIFO                              Not attached
```

Note the **BUSID** (example: `2-1`).

---

## 3️⃣ Attach USB to WSL

```powershell
usbipd bind --busid 2-1
usbipd attach --wsl --busid 2-1
```

If you have multiple distros:

```powershell
usbipd attach --wsl --distribution Ubuntu --busid 2-1
```

---

## 4️⃣ Verify Inside WSL

Open WSL and check:

```bash
lsusb
```

You should see your device.

For serial devices:

```bash
ls /dev/tty*
```

Usually appears as:

```
/dev/ttyUSB0
```

---

## 5️⃣ Detach When Done

From Windows:

```powershell
usbipd detach --busid 2-1
```

---

## ⚠️ Important Notes

* Works only with **WSL2**
* Windows 11 recommended (Windows 10 works with latest updates)
* If `/dev/ttyUSB0` doesn’t appear, install inside WSL:

```bash
sudo apt install usbutils
```

---


## Directories

| Name                | Contents                                            |
| ------------------- | --------------------------------------------------- |
| core                | RISC-V core (http://github.com/ultraembedded/riscv) |
| fpga/arty           | Digilent Artix-7 Arty FPGA Dev Board project        |
| soc                 | Verilog for peripherals, interconnect, etc          |
| tb                  | System-C testbench for the project                  |

## Features

The top (riscv_soc in riscv_soc.v) contains;
* RISC-V core (RV32IM instructions supported).
* 16KB (8KB x 2-way) instruction cache.
* Timer, UART, SPI and interrupt controller peripherals.
* AXI4-Lite slave port for external bus master/debug access to peripherals / main memory.
* AXI4 master port for access to main memory, e.g. SDRAM (external to the design).

## Interfaces

| Name           | Description                                                           |
| -------------- | --------------------------------------------------------------------- |
| clk_i          | Clock input                                                           |
| rst_i          | Async reset, active-high. Reset SoC (excluding CPU core).             |
| rst_cpu_i      | Async reset, active-high. Reset CPU core.                             |
| reset_vector_i | Initial boot address.                                                 |
| inport_*       | AXI4-Lite slave interface for access to SoC / memory.                 |
| mem_*          | AXI4 master interface to main memory.                                 |
| spi_*          | SPI interface                                                         |
| gpio_*         | GPIO interface                                                        |
| uart_rxd_o     | UART Tx (connect to remote receiver)                                  |
| uart_txd_i     | UART Rx (connect to remote transmitter)                               |

## Testbench

A basic System-C / Verilator based testbench for the design is provided.

Dependancies;
* gcc
* make
* libelf
* System-C (specify path using SYSTEMC_HOME)
* Verilator (specify path using VERILATOR_SRC)

## FPGA

This project is ready to run on the 'Digilent Artix-7 Arty' FPGA dev board;

![](doc/arty.png)


<img width="1600" height="866" alt="image" src="https://github.com/user-attachments/assets/2fa86242-a529-490e-a25e-f2e601b94074" />


<img width="1600" height="204" alt="image" src="https://github.com/user-attachments/assets/27493bc8-2d1c-464b-a408-5a54a15ed97f" />

The test project for FPGA uses the [UART to AXI dbg bridge](https://github.com/ultraembedded/cores/tree/master/dbg_bridge) to allow code to be loaded into DDR prior to de-asserting the CPU's reset.

The 'rv32imsu' core (as used in the provided bitstream) is capable of booting Linux;

## Size

### SoC + Small Core (core/rv32i_spartan6)

| Xilinx Vivado (for XC7)    | Used |
|----------------------------|------|
| Slice LUTs                 | 3654 |
| Slice Registers            | 1468 |

### SoC + Larger Core (core/rv32imsu)

| Xilinx Vivado (for XC7)    | Used |
|----------------------------|------|
| Slice LUTs                 | 7046 |
| Slice Registers            | 3170 |


## Memory Map

| Range                     | Description                                         |
| ------------------------- | --------------------------------------------------- |
| 0x8000_0000 - 0x8fff_ffff | Main memory (external to the design)                |
| 0x9000_0000 - 0x90ff_ffff | Peripheral - IRQ controller                         |
| 0x9100_0000 - 0x91ff_ffff | Peripheral - Timer                                  |
| 0x9200_0000 - 0x92ff_ffff | Peripheral - UART                                   |
| 0x9300_0000 - 0x93ff_ffff | Peripheral - SPI                                    |
| 0x9400_0000 - 0x94ff_ffff | Peripheral - GPIO                                   |

## Interrupt Sources

| Index  | Source                      |
| -------| --------------------------- |
|   0    | Peripheral - Timer          |
|   1    | Peripheral - UART           |
|   2    | Peripheral - SPI            |
|   3    | Peripheral - GPIO           |

## Peripheral Register Map

| Offset | Name | Description   |
| ------ | ---- | ------------- |
| 0x9000_0000 | IRQ_ISR | [RW] Interrupt Status Register |
| 0x9000_0004 | IRQ_IPR | [R] Interrupt Pending Register |
| 0x9000_0008 | IRQ_IER | [RW] Interrupt Enable Register |
| 0x9000_000c | IRQ_IAR | [W] Interrupt Acknowledge Register |
| 0x9000_0010 | IRQ_SIE | [W] Set Interrupt Enable bits |
| 0x9000_0014 | IRQ_CIE | [W] Clear Interrupt Enable bits |
| 0x9000_0018 | IRQ_IVR | [RW] Interrupt Vector Register |
| 0x9000_001c | IRQ_MER | [RW] Master Enable Register |
| 0x9100_0008 | TIMER_CTRL0 | [RW] Control |
| 0x9100_000c | TIMER_CMP0 | [RW] Compare value (interrupt on match) |
| 0x9100_0010 | TIMER_VAL0 | [RW] Current Value |
| 0x9100_0014 | TIMER_CTRL1 | [RW] Control |
| 0x9100_0018 | TIMER_CMP1 | [RW] Compare value (interrupt on match) |
| 0x9100_001c | TIMER_VAL1 | [RW] Current Value |
| 0x9200_0000 | ULITE_RX | [R] UART Data Register |
| 0x9200_0004 | ULITE_TX | [W] UART Data Register |
| 0x9200_0008 | ULITE_STATUS | [R] UART Status Register |
| 0x9200_000c | ULITE_CONTROL | [RW] UART Configuration Register |
| 0x9300_001c | SPI_DGIER | [RW] Device Global Interrupt Enable Register |
| 0x9300_0020 | SPI_IPISR | [RW] IP Interrupt Status Register |
| 0x9300_0028 | SPI_IPIER | [RW] IP Interrupt Enable Register |
| 0x9300_0040 | SPI_SRR | [RW] Software Reset Register |
| 0x9300_0060 | SPI_CR | [RW] SPI Control Register |
| 0x9300_0064 | SPI_SR | [R] SPI Status Register |
| 0x9300_0068 | SPI_DTR | [W] SPI Data Transmit Register |
| 0x9300_006c | SPI_DRR | [R] SPI Data Receive Register |
| 0x9300_0070 | SPI_SSR | [RW] SPI Slave Select Register |
| 0x9400_0000 | GPIO_DIRECTION | [RW] Configuration Register |
| 0x9400_0004 | GPIO_INPUT | [R] GPIO Input Status |
| 0x9400_0008 | GPIO_OUTPUT | [RW] GPIO Output Control |
| 0x9400_000c | GPIO_OUTPUT_SET | [W] GPIO Output Control Set Alias |
| 0x9400_0010 | GPIO_OUTPUT_CLR | [W] GPIO Output Control Clr Alias |
| 0x9400_0014 | GPIO_INT_MASK | [RW] GPIO Interrupt Enable Mask |
| 0x9400_0018 | GPIO_INT_SET | [W] GPIO Interrupt Set |
| 0x9400_001c | GPIO_INT_CLR | [W] GPIO Interrupt Clear |
| 0x9400_0020 | GPIO_INT_STATUS | [R] GPIO Interrupt Raw Status |
| 0x9400_0024 | GPIO_INT_LEVEL | [RW] GPIO Interrupt Level |
| 0x9400_0028 | GPIO_INT_MODE | [RW] GPIO Interrupt Mode |

### Peripheral Register Fields

##### IRQ Register: IRQ_ISR

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 3:0 | STATUS | Pending interrupt (unmasked) bitmap. |

##### IRQ Register: IRQ_IPR

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 3:0 | PENDING | Pending interrupts (masked) bitmap. |

##### IRQ Register: IRQ_IER

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 3:0 | ENABLE | Interrupt enable mask. |

##### IRQ Register: IRQ_IAR

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 3:0 | ACK | Bitmap of interrupts to acknowledge. |

##### IRQ Register: IRQ_SIE

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 3:0 | SET | Bitmap of interrupts to enable. |

##### IRQ Register: IRQ_CIE

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 3:0 | CLR | Bitmap of interrupts to disable. |

##### IRQ Register: IRQ_IVR

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31:0 | VECTOR | Highest priority active interrupt number. |

##### IRQ Register: IRQ_MER

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 0 | ME | Master Enable |

##### Timer Register: TIMER_CTRLx

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 1 | INTERRUPT | Interrupt enable. |
| 2 | ENABLE | Timer enable. |

##### Timer Register: TIMER_CMPx

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31:0 | VALUE | Match value. |

##### Timer Register: TIMER_VALx

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31:0 | CURRENT | Current timer value. |

##### UART Register: ULITE_RX

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 7:0 | DATA | Date byte |

##### UART Register: ULITE_TX

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 7:0 | DATA | Date byte |

##### UART Register: ULITE_STATUS

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 4 | IE | Interrupt enabled |
| 3 | TXFULL | Transmit buffer full |
| 2 | TXEMPTY | Transmit buffer empty |
| 1 | RXFULL | Receive buffer full |
| 0 | RXVALID | Receive buffer not empty |

##### UART Register: ULITE_CONTROL

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 4 | IE | Interrupt enable |
| 1 | RST_RX | Flush Rx Buffer |
| 0 | RST_TX | Flush Tx Buffer |

##### SPI Register: SPI_DGIER

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31 | GIE | Global interrupt enable. |

##### SPI Register: SPI_IPISR

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 2 | TX_EMPTY | Tx FIFO empty interrupt status. |

##### SPI Register: SPI_IPIER

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 2 | TX_EMPTY | Tx FIFO interrupt enable. |

##### SPI Register: SPI_SRR

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31:0 | RESET | Software FIFO reset. |

##### SPI Register: SPI_CR

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 0 | LOOP | Loopback enable (MOSI to MISO). |
| 1 | SPE | SPI Enable. |
| 2 | MASTER | Master mode (slave mode not currently supported). |
| 3 | CPOL | Clock polarity. |
| 4 | CPHA | Clock phase. |
| 5 | TXFIFO_RST | Tx FIFO reset. |
| 6 | RXFIFO_RST | Rx FIFO reset. |
| 7 | MANUAL_SS | Manual chip select mode (auto mode not supported). |
| 8 | TRANS_INHIBIT | Transfer inhibit. |
| 9 | LSB_FIRST | Data LSB first (1) or MSB first (0). |

##### SPI Register: SPI_SR

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 0 | RX_EMPTY | Rx FIFO empty. |
| 1 | RX_FULL | Rx FIFO full. |
| 2 | TX_EMPTY | Tx FIFO empty. |
| 3 | TX_FULL | Tx FIFO full. |

##### SPI Register: SPI_DTR

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 7:0 | DATA | Date byte |

##### SPI Register: SPI_DRR

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 7:0 | DATA | Date byte |

##### SPI Register: SPI_SSR

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 0 | VALUE | Chip select value |

##### GPIO Register: GPIO_DIRECTION

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31:0 | OUTPUT | 0 = Input, 1 = Output |

##### GPIO Register: GPIO_INPUT

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31:0 | VALUE | Raw input status |

##### GPIO Register: GPIO_OUTPUT

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31:0 | DATA | GPIO output value |

##### GPIO Register: GPIO_OUTPUT_SET

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31:0 | DATA | GPIO output mask - set for high |

##### GPIO Register: GPIO_OUTPUT_CLR

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31:0 | DATA | GPIO output mask - set for low |

##### GPIO Register: GPIO_INT_MASK

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31:0 | ENABLE | GPIO Interrupt Enable Mask |

##### GPIO Register: GPIO_INT_SET

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31:0 | SW_IRQ | Write 1 to assert an interrupt |

##### GPIO Register: GPIO_INT_CLR

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31:0 | ACK | Write 1 to clear an interrupt |

##### GPIO Register: GPIO_INT_STATUS

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31:0 | RAW | Set if interrupt active (regardless of INT_MASK) |

##### GPIO Register: GPIO_INT_LEVEL

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31:0 | ACTIVE_HIGH | GPIO Interrupt Level - 1 = active high / rising edge, 0 = active low / falling edge |

##### GPIO Register: GPIO_INT_MODE

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31:0 | EDGE | GPIO Interrupt Mode - 1 = edge triggered, 0 = level |
