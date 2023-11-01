/*
 ============================================================================
 Name        : project1_7.c
 Author      : Abdelrhman mohamed
 Created on  : July 27, 2023
 Description : C Program to Find Factorial ofa Number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num ;
	long fact = 1;
	while(1){
		printf("Enter a non-negative integer : ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&num);
		if (num < 0) {
			printf("Error!!! Factorial of negative number doesn't exist. \n");
			continue;
		}
		while(num!=0){
			fact*=num--;
		}
		printf("factorial = %ld \n",fact);
		fact=1;
	}
	return 0;
}

