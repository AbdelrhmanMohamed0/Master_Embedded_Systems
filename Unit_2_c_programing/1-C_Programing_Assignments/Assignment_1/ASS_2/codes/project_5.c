/*
 ============================================================================
 Name        : project1_5.c
 Author      : Abdelrhman mohamed
 Created on  : July 27, 2023
 Description : C Program to Check Whether a Character is an Alphabet or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1){
		char alphabet;
		printf("Enter a character : ");
		fflush(stdin); fflush(stdout);
		scanf("%c",&alphabet);
		if(((alphabet>='a')&&(alphabet<='z'))||((alphabet>='A')&&(alphabet<='Z')))
			printf("%c is an alphabet \n",alphabet);
		else
			printf("%c is not an alphabet \n",alphabet);
	}
	return 0;
}
