/*
 ============================================================================
 Name        : project_4
 Author      : Abdelrhman mohamed
 Description : C Program to Calculate the Power of a Number Using Recursion
 ============================================================================
 */
#include<stdio.h>
#include<stdlib.h>

int power_of_number(int base,int power);

int main (void){
	int base,power,res;
	printf("Enter a base:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&base);
	printf("Enter power number positive integer:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&power);
	res= power_of_number(base,power);
	printf("%d ^ %d = %d",base,power,res);
	return 0;
}
int power_of_number(int base,int power){
	if(power==0)
		return 1;
	return base*power_of_number(base,power-1);
}
