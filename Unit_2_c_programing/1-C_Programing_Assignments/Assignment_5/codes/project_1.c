/*
 ============================================================================
 Name        : project1
 Author      : Abdelrhman mohamed
 Description : C Program to demonstrate how to handle the pointers in program
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m = 5;
    int *ptr = NULL;
    printf("m is a value and ptr is a pointer hold an address \n");
    printf("value of m = %d \n", m);
    printf("addres of m = 0x%X \n", &m);
    ptr = &m;
    printf("now ptr is assigned with the address of m \n");
    printf("address of pointer is 0x%X \n", ptr);
    printf("the content of the pointer is %d \n", *ptr);
    m = 34;
    printf("now the value of m is assigned to 34 \n");
    printf("address of pointer is 0x%X \n", ptr);
    printf("the content of the pointer is %d \n", *ptr);
    *ptr = 7;
    printf("now the pointer variable is assigned to 7 \n");
    printf("address of m is 0x%X \n", &m);
    printf("the value of m is %d \n", m);
    return 0;
}
