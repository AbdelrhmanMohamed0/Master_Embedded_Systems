/*
 ============================================================================
 Name        : project_4
 Author      : Abdelrhman mohamed
 Description : C program takes n number of element from user
               (where, n is specified by user),stores data in an array
               and calculates the average of those numbers.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,i;
	float arr[100],sum=0,avg=0;
	printf("please enter number of element but less than 100 \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	while (num<0 || num>100){
		printf("Error! \n");
		printf("Enter number again: \n");
		scanf( "%d",&num );
	}
	for(i=0;i<num;i++){
		printf("enter elment [%d]:",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	avg=sum/num;
	printf("average = %.2f",avg);
	return 0;
}
