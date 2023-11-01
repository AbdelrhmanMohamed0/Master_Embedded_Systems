/*
 ============================================================================
 Name        : project2
 Author      : Abdelrhman mohamed
 Description : C Program to  print all the alphabets using a pointer.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch = 'A';
    char *ptr = &ch;
    while (*ptr != 'Z')
    {
        printf("%c\n", (*ptr)++);
    }
    printf("%c\n", *ptr);
    return 0;
}
