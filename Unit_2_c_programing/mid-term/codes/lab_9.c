/*
 ============================================================================
 Name        : lab_9
 Author      : Abdelrhman mohamed
 Description : C Program to reverse words in string
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
void reverse_words(char str[], int len);
int main(void)
{
    char str[SIZE];
    printf("enter string  : ");
    fflush(stdout);
    fflush(stdin);
    gets(str);
    reverse_words(str, strlen(str));
    printf("reversed  words in string is : %s \n", str);
    return 0;
}
void reverse_words(char str[], int len_t)
{
    int len_w, max, i, j;
    char temp, arr[SIZE];
    for (len_w = 0; str[len_w] != 32; len_w++);
    for (i = len_w + 1, j = 0; i < len_t; i++, j++)
    {
        arr[j] = str[i];
    }
    arr[j] = ' ';
    for (i = 0, ++j; i < len_w; i++, j++)
    {
        arr[j] = str[i];
    }
    arr[j] = '\0';
    strcpy(str, arr);
}
