/*
 ============================================================================
 Name        : project1_2.c
 Author      : Abdelrhman mohamed
 Created on  : July 27, 2023
 Description : C Program to Check Vowel or Consonant
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1){
		char alphapet;
		printf("Enter an alphabet: ");
		fflush(stdin); fflush(stdout);
		scanf("%c",&alphapet);
		switch(alphapet){
		case 'A' :
		case 'a' :
		case 'E' :
		case 'e' :
		case 'I' :
		case 'i' :
		case 'O' :
		case 'o' :
		case 'U' :
		case 'u' :
			printf("%c is a vowel \n",alphapet);
			break;
			default :
			printf("%c is a consonant \n",alphapet);
			break;
		}
	}
	return 0;
}
