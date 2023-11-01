/*
 ============================================================================
 Name        : project_4.c
 Author      : Abdelrhman mohamed
 Created on  : July 27, 2023
 Description : C Program to Multiply two Floating Point Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float number1,number2;
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&number1,&number2);
	printf("Product: %f",(number1*number2));
		return 0;
}
