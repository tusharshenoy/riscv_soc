## Boolean Board XDC Constraints
## RealDigital Boolean Board - Spartan-7 XC7S50-CSGA324
##
## Pin assignments verified against Boolean_Master.xdc (RealDigital official).

##==============================================================
## Bank voltage configuration
##==============================================================
set_property CFGBVS VCCO [current_design]
set_property CONFIG_VOLTAGE 3.3 [current_design]

##==============================================================
## Clock - 100 MHz MEMS/CMOS oscillator
## Boolean Master XDC: PACKAGE_PIN F14
##==============================================================
set_property -dict { PACKAGE_PIN F14  IOSTANDARD LVCMOS33 } [get_ports { clk100mhz }]
create_clock -add -name sys_clk_pin -period 10.00 -waveform {0 5} [get_ports { clk100mhz }]

##==============================================================
## LEDs (active high on Boolean board)
## Boolean Master XDC: led[0]=G1, led[1]=G2, led[2]=F1, led[3]=F2
##==============================================================
set_property -dict { PACKAGE_PIN G1  IOSTANDARD LVCMOS33 } [get_ports { led[0] }]
set_property -dict { PACKAGE_PIN G2  IOSTANDARD LVCMOS33 } [get_ports { led[1] }]
set_property -dict { PACKAGE_PIN F1  IOSTANDARD LVCMOS33 } [get_ports { led[2] }]
set_property -dict { PACKAGE_PIN F2  IOSTANDARD LVCMOS33 } [get_ports { led[3] }]

##==============================================================
## USB-UART Interface (through PROG/UART FT2232H on Boolean)
##
## Boolean Master XDC names:
##   UART_rxd = V12  (PC sends  -> FPGA receives) -> our uart_txd_in
##   UART_txd = U11  (FPGA sends -> PC receives)  -> our uart_rxd_out
##==============================================================
set_property -dict { PACKAGE_PIN U11  IOSTANDARD LVCMOS33 } [get_ports { uart_rxd_out }]
set_property -dict { PACKAGE_PIN V12  IOSTANDARD LVCMOS33 } [get_ports { uart_txd_in  }]

##==============================================================
## Timing constraints
##==============================================================

## UART RX is asynchronous - no input timing analysis needed
set_false_path -from [get_ports { uart_txd_in }]

## UART TX is asynchronous serial - false path is correct and clean
set_false_path -to [get_ports { uart_rxd_out }]

## Bitstream settings
set_property BITSTREAM.GENERAL.COMPRESS TRUE [current_design]
set_property BITSTREAM.CONFIG.UNUSEDPIN PULLDOWN [current_design]
