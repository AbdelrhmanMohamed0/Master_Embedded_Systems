/*
 ============================================================================
 Name        : project1_6.c
 Author      : Abdelrhman mohamed
 Created on  : July 27, 2023
 Description : C Program to Calculate Sum of Natural Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1){
		int num ,sum = 0,i;
		printf("Enter a non-negative integer : ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&num);
		if (num < 0) {
			printf("Invalid input\n");
			continue;
		}
		for(i=0;i<=num;i++)
			sum+=i;
		printf("sum = %d \n",sum);
	}
	return 0;
}

