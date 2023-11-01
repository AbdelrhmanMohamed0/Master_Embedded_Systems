/*
 ============================================================================
 Name        : project_6.c
 Author      : Abdelrhman mohamed
 Created on  : July 27, 2023
 Description : C Program to Swap Two Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,temp;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.2f\n",b);
	return 0;
}
