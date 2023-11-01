/*
 ============================================================================
 Name        : project_3
 Author      : Abdelrhman mohamed
 Description : C Program to Reverse a Sentence Using Recursion
 ============================================================================
 */
#include<stdio.h>
#include<stdlib.h>

void reverse_sentence();

int main (void){
	printf("Enter a sentence:");
	fflush(stdout); fflush(stdin);
	reverse_sentence();
	return 0;
}
void reverse_sentence(){
	char s;
	scanf("%c",&s);
	if( s!='\n')
	{
		reverse_sentence();
		printf( "%c",s) ;
	}
}
