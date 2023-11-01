/*
 ============================================================================
 Name        : lab_6
 Author      : Abdelrhman mohamed
 Description : C Program to return unique number in array with one loop
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int unique_number(int array[], int size);
int main(void)
{
    int array[SIZE], size, i, res;
    printf("please enter size of array : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("enter element number [%d] : ", i + 1);
        fflush(stdin);
        fflush(stdout);
        scanf("%d", &array[i]);
    }
    res = unique_number(array, size);
    printf("the unique number in array is : %d", res);
    return 0;
}
int unique_number(int array[], int size)
{
    int i, res = 0;
    for (i = 0; i < size; i++)
    {
        res ^= array[i];
    }
    return res;
}
