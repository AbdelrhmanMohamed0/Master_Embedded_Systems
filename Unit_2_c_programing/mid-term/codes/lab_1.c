/*
 ============================================================================
 Name        : lab_1
 Author      : Abdelrhman mohamed
 Description : C Program to take a number and sum all digits
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int sum_digit(int num);
int main(void)
{
    int num, res;
    do
    {
        printf("please enter positive number :");
        fflush(stdin);
        fflush(stdout);
        scanf("%d", &num);
    } while (num < 0);
    res = sum_digit(num);
    printf("sum of digits for number %d is %d \n", num, res);
    return 0;
}
int sum_digit(int num)
{
    int rem, sum = 0;
    if (num != 0)
    {
        while (num > 0)
        {
            rem = num % 10;
            sum += rem;
            num /= 10;
        }
        return sum;
    }
    else
        return 0;
}
