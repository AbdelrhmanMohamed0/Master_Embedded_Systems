/*
 ============================================================================
 Name        : project_7
 Author      : Abdelrhman mohamed
 Description : C Program to Search an element in Array.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[50]={0},i,n,num;
	printf("Enter no of element : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter elment [%d] : \t",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	for(i=0;i<n;i++)
		if(arr[i]==num)
			break;
	if (i < n)
		printf( "Number found at the location = %d",i+1);
	else
		printf( "Number not found ");
	return 0;
}
