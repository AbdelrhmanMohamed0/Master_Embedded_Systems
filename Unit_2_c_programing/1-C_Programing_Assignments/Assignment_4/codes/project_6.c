/*
 ============================================================================
 Name        : project_6
 Author      : Abdelrhman mohamed
 Description : C Program to Calculate size of union and struct .
 ============================================================================
 */
#include<stdio.h>

union job{
char name [32];
float salary;
int worker_no;
}u;
struct jobl {
char name [32];
float salary;
int worker_no;
}s;
int main(){
printf("size of union =%d \n", sizeof(u));          //32
printf("size of structure = %d \n", sizeof(s));     //40
return 0;
}
