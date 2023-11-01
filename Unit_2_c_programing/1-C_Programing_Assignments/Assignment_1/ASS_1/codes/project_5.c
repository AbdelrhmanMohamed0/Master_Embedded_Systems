/*
 ============================================================================
 Name        : project_5.c
 Author      : Abdelrhman mohamed
 Created on  : July 27, 2023
 Description : C Program to Find ASCII Value of a Character
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char character;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&character);
	printf("ASCII value of %c = %d",character,character);
		return 0;
}
