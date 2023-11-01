/*
 ============================================================================
 Name        : project_3
 Author      : Abdelrhman mohamed
 Description : C program to find sum of two matrix of order 2* 2 using
               multidimensional arrays where, elements of matrix are
               entered by user.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float arr1[2][2],arr2[2][2];
	int i,j;
	printf("for matrix 1 \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter elment [%d][%d] :",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&arr1[i][j]);
		}}
	printf("\n for matrix 2 \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter elment [%d][%d] :",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&arr2[i][j]);
		}}
	printf("\n sum of two matrix is \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%.2f \t",arr1[i][j]+arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
