#ifndef UART_H_
#define UART_H_

#define UART0RD *((volatile unsigned int *)((unsigned int *)0x101f1000))

void Uart_Send_String(unsigned char *p_tx_string);

#endif