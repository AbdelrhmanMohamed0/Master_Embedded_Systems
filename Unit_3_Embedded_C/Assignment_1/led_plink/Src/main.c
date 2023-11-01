/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdio.h>
#include <stdlib.h>
#include "Platform_Types.h"

#define RCC_Base                0x40021000
#define PORTA_Base               0x40010800
#define RCC_APB2ENR_Regester    *(vuint32_t *)(RCC_Base+0x18)
#define GPIO_CRH_Regester       *(vuint32_t *)(PORTA_Base+0x04)
#define GPIO_ODR_Regester       *(vuint32_t *)(PORTA_Base+0x0C)

int main(void)
{

	RCC_APB2ENR_Regester |= (1<<2);
    GPIO_CRH_Regester &=0xff0fffff;
    GPIO_CRH_Regester |=0x00200000;

    while(1){

    	GPIO_ODR_Regester |=(1<<13);
    	for(uint32 i=0;i<5000;i++);
    	GPIO_ODR_Regester &= ~(1<<13);
    	for(uint32 j=0;j<5000;j++);
    }
return 0;
}