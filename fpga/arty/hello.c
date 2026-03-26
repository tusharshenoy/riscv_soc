#include <stdint.h>

#define UART_BASE   0x92000000
#define UART_RX     (*(volatile uint32_t*)(UART_BASE + 0x0))
#define UART_TX     (*(volatile uint32_t*)(UART_BASE + 0x4))
#define UART_STAT   (*(volatile uint32_t*)(UART_BASE + 0x8))

// UART status bits (UARTLite)
#define UART_TX_FULL   0x08

void uart_putchar(char c)
{
    // Wait while TX FIFO is full
    while (UART_STAT & UART_TX_FULL);

    UART_TX = (uint32_t)c;
}

void print(const char *s)
{
    while (*s)
        uart_putchar(*s++);
}

int main(void)
{
    print("Hello from RV32 Bare Metal!\n");

    while (1);
    return 0;
}
