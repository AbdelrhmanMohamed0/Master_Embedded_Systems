/*
 ============================================================================
 Name        : project_7.c
 Author      : Abdelrhman mohamed
 Created on  : July 27, 2023
 Description : C Program to Swap Two Numbers without temp variable
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swapping, value of a = %d\n",a);
	printf("After swapping, value of b = %d\n",b);
	return 0;
}
