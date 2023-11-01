/*
 =================================================================================
 Name        : lab_2
 Author      : Abdelrhman mohamed
 Description : C Program to take an integer number and calculate it's square root
 =================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float square_root(int num);
int main(void)
{
    int num;
    float res;
    printf("please enter integer number :");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &num);
    res = square_root(num);
    if (num >= 0)
        printf("the square root for number %d is %.3f \n", num, res);
    else
        printf("the square root for number %d is %.3fi \n", num, res);
    return 0;
}
float square_root(int num)
{
    if (num < 0)
        num = -num;
    return sqrtf(num);
}