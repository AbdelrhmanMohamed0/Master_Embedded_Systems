/*
 ============================================================================
 Name        : lab_8
 Author      : Abdelrhman mohamed
 Description : C Program to take an array and revers its elements
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void reverse_array(int arr[], int size);
int main(void)
{
    int arr[SIZE], size;
    printf("Enter size of array ");
    fflush(stdout);
    fflush(stdin);
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("enter element number %d : ", i + 1);
        fflush(stdout);
        fflush(stdin);
        scanf("%d", &arr[i]);
    }
    reverse_array(arr, size);
    printf("reversed array is : \n");
    for (int i = 0; i < size; i++)
        printf("%d \t", arr[i]);
    return 0;
}
void reverse_array(int arr[], int size)
{
    int s;
    for (int i = 0; i < size / 2; i++)
    {
        s = size - i - 1;
        arr[i] = arr[i] ^ arr[s];
        arr[s] = arr[i] ^ arr[s];
        arr[i] = arr[i] ^ arr[s];
    }
}
