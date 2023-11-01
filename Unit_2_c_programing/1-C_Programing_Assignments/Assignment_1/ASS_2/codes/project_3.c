/*
 ============================================================================
 Name        : project1_3.c
 Author      : Abdelrhman mohamed
 Created on  : July 27, 2023
 Description : C Program to Find the Largest Number Among Three Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1){
		float num1,num2,num3,max=0;
		printf("Enter three numbers : ");
		fflush(stdin); fflush(stdout);
		scanf("%f %f %f",&num1,&num2,&num3);
		max=(num1>num2)?(num1>num3)?num1:num3:(num2>num3)?num2:num3;
		printf("largest number is %.2f \n",max);
	}
	return 0;
}
