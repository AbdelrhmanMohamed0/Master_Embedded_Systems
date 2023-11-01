/*
 ============================================================================
 Name        : project_2.c
 Author      : Abdelrhman mohamed
 Created on  : July 27, 2023
 Description : C Program to Print a Integer Entered by a User
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number = 0;
	printf("Enter a integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("You entered: %d",number);
	return 0;
}
