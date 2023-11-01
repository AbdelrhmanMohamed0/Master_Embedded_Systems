/*
 ============================================================================
 Name        : project4
 Author      : Abdelrhman mohamed
 Description : C Program to print the elements of an array in reverse order .
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int array[15];
    int *ptr = NULL;
    int i, size;
    printf("please enter an number of element of array less than 15 \n");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("please enter element number %d : ",i+1);
        scanf("%d",&array[i]);
    }
    ptr=array;
    printf("array in reversed order is : \n");
    for(i=size-1;i>=0;i--){
        printf("element number %d : %d \n",i+1,*(ptr+i));
    }
    return 0;
}
