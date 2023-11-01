/*
 ============================================================================
 Name        : lab_7
 Author      : Abdelrhman mohamed
 Description : C Program to sum numbers from 1 to 100(without loop)
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int sum(int num);
int main(void)
{
    int num;
    printf("please enter number : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &num);
    int res = sum(num);
    printf("sum from 0 to %d = %d \n", num, res);
    return 0;
}
int sum(int num)
{
    int static res = 0;
    res += num;
    if (num == 0)
    {
        return res;
    }
    else
    {
        sum(--num);
    }
}
