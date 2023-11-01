/*
 ============================================================================
 Name        : project_5
 Author      : Abdelrhman mohamed
 Description : C program asks user to entera matrix (size of matrix is
               specified by user) and this program finds the transpose
               of that matrix and displays it.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[30][30],row,col,i,j;
	printf("please enter rows and column for the matrix \n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("enter elment [%d][%d]: \t",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	printf("Entered matrix \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d \t",arr[i][j]);
		}
		printf("\n");}
	printf("Transpose matrix \n");
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
			printf("%d\t",arr[j][i]);}
		printf("\n");
	}
	return 0;
}
