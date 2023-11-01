/*
 ============================================================================
 Name        : lab_4
 Author      : Abdelrhman mohamed
 Description : C Program to revers digits in number
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int reverse_number(int num);
int main(void)
{
    int num, res;
    printf("please enter number : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &num);
    res = reverse_number(num);
    printf("the reversed number is : %d", res);
    return 0;
}
int reverse_number(int num)
{
    int rem, res = 0;
    do
    {
        rem = num % 10;
        res = res * 10 + rem;
        num /= 10;
    } while (num > 0);
    return res;
}
