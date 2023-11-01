/*
 ============================================================================
 Name        : project_9
 Author      : Abdelrhman mohamed
 Description : C Program to Find the Length of a String .
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char text[100];
	int count=0,i=0;
	printf("Enter a string :");
	fflush(stdout); fflush(stdin);
	gets(text);
	while(text[i++]!='\0')
	{
		count++;
	}
	printf("Length of string: %d ",count);
	return 0;
}
