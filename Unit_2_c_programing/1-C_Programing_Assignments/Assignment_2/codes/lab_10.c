/*
 ============================================================================
 Name        : project_10
 Author      : Abdelrhman mohamed
 Description : C Program to Reverse String Without Using Library Function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char text[100];
	int count=0,i=0,temp;
	printf("Enter a string :");
	fflush(stdout); fflush(stdin);
	gets(text);
	while(text[i++]!='\0')
	{
		count++;
	}
	i=0;
	count--;
	while(i<count){
		temp=text[i];
		text[i]=text[count];
		text[count]=temp;
		i++;
		count--;
	}
	printf("Reverse string is : %s ",text);
	return 0;
}
