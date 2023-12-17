#include"uart.h"
void Uart_Send_String( unsigned char *p_tx_string){
    while(*p_tx_string!='\0'){
        UART0RD=(unsigned int )(*p_tx_string);
        p_tx_string++;
    }
}