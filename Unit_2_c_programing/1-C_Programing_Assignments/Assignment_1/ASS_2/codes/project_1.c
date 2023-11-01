/*
 ============================================================================
 Name        : project1_1.c
 Author      : Abdelrhman mohamed
 Created on  : July 27, 2023
 Description : C Program to Check Whether a Number is Even or Odd
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1){
		int number;
		printf("Enter an integrt you want to check: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&number);
		if(number%2==0)
			printf("%d is even\n",number);
		else
			printf("%d is odd\n",number);
	}
	return 0;
}
