/*
 ============================================================================
 Name        : project_2
 Author      : Abdelrhman mohamed
 Description : C program to find the  of 4 integers entered by a user
               If user enters 0 skip it.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,count,mul=1;
	printf("please enter 4 number \n");
	for(count=1;count<=4;count++){
		printf("enter number %d : ",count);
		fflush(stdin); fflush(stdout);
		scanf("%d",&number);
		if(number==0)
			continue;
		mul*=number;
	}
	printf("product =%d \n",mul);

}
