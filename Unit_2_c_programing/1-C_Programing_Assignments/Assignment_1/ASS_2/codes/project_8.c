/*
 ============================================================================
 Name        : project1_8.c
 Author      : Abdelrhman mohamed
 Created on  : July 27, 2023
 Description : C Program to Make a Simple Calculator to Add, Subtract, Multiply or
               Divide Using switch...case
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2;
	char operator ;
	while(1){
		printf("Enter operator either + or - or * or /  : ");
		fflush(stdin); fflush(stdout);
		scanf("%c",&operator);
		printf("enter two operands : ");
		fflush(stdin); fflush(stdout);
		scanf("%f %f",&num1,&num2);
		switch(operator){
		case '+':
			printf("%.3f + %.3f = %.3f \n",num1,num2,(num1+num2));
			break;
		case '-':
			printf("%.3f - %.3f = %.3f \n",num1,num2,(num1-num2));
			break;
		case '*':
			printf("%.3f * %.3f = %.3f \n",num1,num2,(num1*num2));
			break;
		case '/':
			if(num2 == 0){
				printf("Error: Division by zero is undefined. Please enter a non-zero number.\n");
				printf("%g \n",0.0/0.0);
				break;
			}
			else
				printf("%.3f / %.3f = %.3f \n",num1,num2,(num1/num2));
			break;
		default:
			printf("wrong operator \n");
			break;
		}
	}
	return 0;
}

