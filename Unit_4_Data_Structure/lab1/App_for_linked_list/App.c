#include <stdio.h>
#include <stdlib.h>
#include "List.h" // Assuming List.h contains necessary function prototypes

int main(void)
{
    List ls;
    char temp_text[40];
    int i = 0;
    ELEMENT_TYPE element, data, size, pos, student;

    list_init(&ls); // Initialize the list
    while (1)
    {
        printf("\n=============================");
        printf("\n choose on of the following options \n");
        printf("\n 1: Add student ");
        printf("\n 2: Delete student ");
        printf("\n 3: View student ");
        printf("\n 4: Delete All student ");
        printf("\n enter option number :  ");
        gets(temp_text);
        printf("\n ============================");
        switch (atoi(temp_text))
        {
        case 1:
            if (insert_list(&ls, i++))
            {
                printf("\nstudent was inserted");
            }
            break;
        case 2:
            printf("\n please enter id for student you need to delete ");
            gets(temp_text);
            if (delete_list(&ls, &student, temp_text))
            {
                printf("\nstudent was deleted");
            }
            printf("\n student id : %d", student.ID);
            printf("\n student name : %s", student.name);
            printf("\n student hight : %f", student.height);
            break;
        case 3:
            printf("\n please enter id for student you need to view it ");
            gets(temp_text);
            if (retrieve_list(&ls, &student, temp_text))
            {
                printf("\n student data is :");
                printf("\n student id : %d", student.ID);
                printf("\n student name : %s", student.name);
                printf("\n student hight : %f", student.height);
            }
            break;
        case 4:
            if (clear_list(&ls))
            {
                i = 0;
                printf("\n all data was deleted");
            }
            break;
        default:
            printf("\n wrong option");
            break;
        }
    }
    return 0;
}
