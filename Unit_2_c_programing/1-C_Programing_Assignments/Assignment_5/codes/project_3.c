/*
 ============================================================================
 Name        : project3
 Author      : Abdelrhman mohamed
 Description : C Program to print a string in reverse using a pointer
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char str[50];
    char *ptr = str;
    int i, len;
    printf("please enter string \n");
    gets(str);
    len = strlen(str);
    printf("reversed string is : \n");
    for (i = len; i >= 0; i--)
    {
        printf("%c", *(ptr + i));
    }
    return 0;
}
