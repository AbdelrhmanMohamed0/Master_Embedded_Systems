/*
 ============================================================================
 Name        : project_4
 Author      : Abdelrhman mohamed
 Description : C Program to Store Information(name, roll and marks)
               of a Students Using Array of Structure
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
Student std[10];

void display(Student std[], int size);

int main(void)
{
    int status = 0, i = 0;
    do
    {
        printf("please enter student name : ");
        fflush(stdin); fflush(stdout);
        gets(std[i].std_Name);
        printf("please enter student roll : ");
        fflush(stdin); fflush(stdout);
        scanf("%d", &std[i].std_roll);
        printf("please enter student mark : ");
        fflush(stdin); fflush(stdout);
        scanf("%f", &std[i].std_mark);
        printf("\nyou can record for %d students \n", 10 - (i++) - 1);
        printf("if you want to record anorher student data enter 1 otherwise enter 0 : \n");
        fflush(stdin); fflush(stdout);
        scanf("%d", &status);
    } while (status && (i < 10));
    display(std, i);
    return 0;
}
void display(Student std[], int size)
{
    for (int k = 0; k < size; k++)
    {
        printf("student num %d name : %s \n", k + 1, std[k].std_Name);
        printf("student num %d roll : %d \n", k + 1, std[k].std_roll);
        printf("student num %d mark : %.2f \n", k + 1, std[k].std_mark);
        printf("\n");
    }
}