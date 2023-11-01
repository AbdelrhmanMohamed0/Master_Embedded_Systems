/*
 ============================================================================
 Name        : project_6
 Author      : Abdelrhman mohamed
 Description : C Program to Insert an element in an Array.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[100]={0},i,n,num,pos;
	printf("Enter no of element : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter elment [%d] : \t",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be inserted :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("\n Enter the location :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&pos);
	arr[pos-1]=num;
	for(i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
	return 0;
}
