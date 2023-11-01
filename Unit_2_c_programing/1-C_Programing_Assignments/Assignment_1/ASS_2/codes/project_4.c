/*
 ============================================================================
 Name        : project1_4.c
 Author      : Abdelrhman mohamed
 Created on  : July 27, 2023
 Description : C Program to Check Whether a Number is Positive or Negative
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1){
		float num;
		printf("Enter a number : ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&num);
		if(num>0)
			printf("%.2f is positive \n",num);
		else if(num<0)
			printf("%.2f is negative \n",num);
		else
			printf("you enter zero \n");

	}
	return 0;
}
