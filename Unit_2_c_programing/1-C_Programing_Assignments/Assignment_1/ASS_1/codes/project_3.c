/*
 ============================================================================
 Name        : project_3.c
 Author      : Abdelrhman mohamed
 Created on  : July 27, 2023
 Description : C Program to Add Two Integers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int number1,number2;
printf("Enter two integers: ");
fflush(stdin); fflush(stdout);
scanf("%d %d",&number1,&number2);
printf("Sum: %d",(number1+number2));
	return 0;
}
