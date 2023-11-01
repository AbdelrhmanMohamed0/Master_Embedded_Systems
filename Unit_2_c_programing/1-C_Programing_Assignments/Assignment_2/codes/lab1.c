/*
 ============================================================================
 Name        : project_1
 Author      : Abdelrhman mohamed
 Description : C program to find average of maximum of n positive numbers
               entered by user. But, if the input is negative,display the
               average(excluding the average of negative input)
               and end the program.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,count;
	float num,sum=0,avg=0;
	printf("please enter number ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	for(count=1;count<=number;count++){
		printf("please enter positive number %d : ",count);
		fflush(stdin); fflush(stdout);
		scanf("%f",&num);
		if(num<0)
			break;
		sum+=num;
	}
	avg=sum/(count-1);
	printf("average =%0.2f \n",avg);

	return 0;
}
