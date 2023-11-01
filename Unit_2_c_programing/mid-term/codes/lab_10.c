/*
 ============================================================================
 Name        : lab_10
 Author      : Abdelrhman mohamed
 Description : C Program to count the max number of ones between two zeros
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int Max_numbers_ones(int num);
int main(void)
{
    int num, res;
    printf("please enter a number : ");
    fflush(stdout);
    fflush(stdin);
    scanf("%d", &num);
    res = Max_numbers_ones(num);
    printf("maximum number of ones in the number %d is %d ", num, res);
    return 0;
}
int Max_numbers_ones(int num)
{
    int max = 0, count = 0;
    for (int i = 0; i < 32; i++)
    {
        if (1 & (num >> i))
        {
            count++;
            if (count > max)
            {
                max = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    return max;
}
