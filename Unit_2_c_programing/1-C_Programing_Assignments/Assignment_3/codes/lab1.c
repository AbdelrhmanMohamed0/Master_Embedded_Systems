/*
 ============================================================================
 Name        : project_1
 Author      : Abdelrhman mohamed
 Description : C Program to print Prime Numbers Between two Intervals by
               Making User-defined Function
 ============================================================================
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void prime_number(int num1,int num2);

int main (void){
	int num1=0,num2=0;
	printf("Enter two numbers(intervals):");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&num1,&num2);
	printf("Prime numbers between %d and %d are: ",num1,num2);
	prime_number(num1,num2);
	return 0;
}

void prime_number(int num1,int num2){
	int i,res,flag;
	while(num1<=num2){
		flag = 1;
		res=sqrt(num1);
		for(i=2;i<=res;i++){
			if(num1%i==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			printf("%d ",num1);
		}
		num1++;
	}
}
