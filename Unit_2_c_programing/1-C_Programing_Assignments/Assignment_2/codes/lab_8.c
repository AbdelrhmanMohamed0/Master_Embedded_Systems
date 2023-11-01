/*
 ============================================================================
 Name        : project_8
 Author      : Abdelrhman mohamed
 Description : C program asks user to enter a string and a character
               and checks how many times that character is repeated
               in the string entered by user.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char text[100],ch;
	int count=0,i=0;
	printf("Enter a string :");
	fflush(stdout); fflush(stdin);
	gets(text);
	printf("Enter a character to find frequency :");
	fflush(stdout); fflush(stdin);
	scanf("%c",&ch);
	while(text[i++]!='\0')
	{
		if(text[i]==ch)
			count++;
	}
	printf("frequency for %c is %d ",ch,count);
	return 0;
}
