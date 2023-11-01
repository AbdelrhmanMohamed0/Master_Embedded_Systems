/*
 ============================================================================
 Name        : project5
 Author      : Abdelrhman mohamed
 Description : C Program to to show a pointer to an array which contents
               are pointer to structure.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    char name[20];
    int id;
    float mark;
} Student;

int main(void)
{
    Student *(*ptr)[];
    Student *array[2] = {NULL, NULL};
    Student student1 = {"Ahmed", 100020, 98.99};
    Student student2 = {"Mohamed", 12345, 95.77};
    array[0] = &student1;
    array[1] = &student2;
    ptr = &array;
    printf("student 1 name is : %s \n", (*ptr)[0]->name);
    printf("student 2 id is : %d \n", ((*ptr)[1]->id));
    return 0;
}
