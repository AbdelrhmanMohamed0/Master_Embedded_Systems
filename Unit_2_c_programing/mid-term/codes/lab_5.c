/*
 ============================================================================
 Name        : lab_5
 Author      : Abdelrhman mohamed
 Description : C Program to count number of ones in binary number
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int ones_binary_number(int num);
int main(void)
{
    int num, res;
    printf("please enter number : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &num);
    res = ones_binary_number(num);
    printf("the number of ones in number %d  is : %d", num, res);
    return 0;
}
int ones_binary_number(int num)
{
    int count = 0;
    for (int i = 1; i <= 32; i++)
    {
        if (1 & (num >> i))
        {
            count++;
        }
        else
        {
        }
    }
    return count;
}
