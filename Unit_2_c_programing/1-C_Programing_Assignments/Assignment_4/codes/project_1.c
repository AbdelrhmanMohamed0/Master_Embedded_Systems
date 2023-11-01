/*
 ============================================================================
 Name        : project_1
 Author      : Abdelrhman mohamed
 Description : C Program to Store Information(name, roll and marks)
               of a Student Using Structure
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char std_Name[30];
    int std_roll;
    float std_mark;
} Student;
Student std;
int main(void)
{
    printf("please enter student name : ");
    fflush(stdin);
    fflush(stdout);
    gets(std.std_Name);
    printf("please enter student roll : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &std.std_roll);
    printf("please enter student mark : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &std.std_mark);
    printf("you entered : \n");
    printf("student  name : %s \n", std.std_Name);
    printf("student  roll : %d \n", std.std_roll);
    printf("student  mark : %.2f \n", std.std_mark);
    printf("\n");
    return 0;
}
