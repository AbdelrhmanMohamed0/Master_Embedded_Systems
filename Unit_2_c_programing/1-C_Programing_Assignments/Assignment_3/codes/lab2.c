/*
 ============================================================================
 Name        : project_2
 Author      : Abdelrhman mohamed
 Description : C Program to Calculate Factorial ofa Number Using Recursion
 ============================================================================
 */
#include<stdio.h>
#include<stdlib.h>

 int fact(int num);

int main (void){
	int num , res;
	printf("Enter an positive integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	res=fact(num);
	printf("Factorial of %d is %d",num,res);
	return 0;
}
 int fact(int num){
	if(num==0){
		return 1;
	}
	else{
		return (num*fact(num-1));
	}
}
