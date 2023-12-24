#include "uart.h"
unsigned char my_name[100]="learn-in-depth : <Abdelrhman>";
void main (void){
    Uart_Send_String(my_name);
}