/*
 ============================================================================
 Name        : lab_3
 Author      : Abdelrhman mohamed
 Description : C Program to print all prime numbers between two numbers
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
char prime_number(int num);
int main(void)
{
    int num1, num2;
    printf("please enter number1 and  number2 : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d %d", &num1, &num2);
    for (int num = num1; num <= num2; num++)
    {
        if (prime_number(num))
        {
            printf("%d ", num);
        }
        else
        {
        }
    }
    return 0;
}
char prime_number(int num)
{
    int s = sqrt(num);
    if (num <= 1)
        return 0;
    for (int i = 2; i <= s; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
