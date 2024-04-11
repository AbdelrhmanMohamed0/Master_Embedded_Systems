/*
 * GccApplication1.c
 *
 * Created: 10/04/2024 03:19:16 م
 * Author : Abdelrhman
 */ 
#define F_CPU 8000000ul
#include <util/delay.h>
#include <avr/io.h>
#include "ERROR_STATES.h"
#include "EXTI_INTERFACE.h"
void FUN1(void);
void FUN2(void);
void FUN3(void);

int main(void)
{
	DDRD = 0b11100000;
	DDRB = 0;
	PORTD= 0;
	CGI();
	EXI_TriggerEdge(EX_INT0,ANY_LOGIC_CHANGE);
	EXI_TriggerEdge(EX_INT1,RISING_EDGE);
	EXI_TriggerEdge(EX_INT2,FALLING_EDGE);
	EXI_Enable(EX_INT0);
	EXI_Enable(EX_INT1);
	EXI_Enable(EX_INT2);
	SGI();
	EXI_SetCallBack(EX_INT0,FUN1);
	EXI_SetCallBack(EX_INT1,FUN2);
	EXI_SetCallBack(EX_INT2,FUN3);
	while(1)
	{
			PORTD &= ~((1<<5) | (1<<6) | (1<<7)) ;
			_delay_ms(1000);
	}
}
void FUN1(void){
	    PORTD |= 1<<5;
	   _delay_ms(1000);	
}
void FUN2(void){
		PORTD |= 1<<6;
		_delay_ms(1000);
}
void FUN3(void){
		PORTD |= 1<<7;
		_delay_ms(1000);
}
