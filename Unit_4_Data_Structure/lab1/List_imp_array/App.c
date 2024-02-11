// Main.c: Test file for list implementation using array in C

#include <stdio.h>  // For input/output functions
#include <stdlib.h> // For exit function
#include "List.h"   // Include header file

// Function to display an element
void display(ELEMENT_TYPE element)
{
    printf("%d \n", element); // Print the element followed by a newline
}

// Main function
int main(void)
{
    List ls;                          // Declare a queue variable
    ELEMENT_TYPE element, data, size; // Declare some variables to store elements, data, and size

    list_init(&ls); // Initialize the list

    insert_list(&ls, 8, 0);
    insert_list(&ls, 9, 1);

    retrieve_list(&ls, &data, 0);           // Get an element of the list and store it in data
    printf("reversed data is %d \n", data); // Print the data

    insert_list(&ls, 17, 2);
    insert_list(&ls, 20, 3);

    delete_list(&ls, &data, 3);            // Pop an element from the list and store it in data
    printf("deleted data is %d \n", data); // Print the data

    traverse_list_as_queue(&ls, &display); // Traverse the list and display each element
    printf("------------------------ \n");
    traverse_list_as_stack(&ls, &display); // Traverse the list and display each element

    size = size_list(&ls);              // Get the size of the list and store it in size
    printf("List size is %d \n", size); // Print the size

    clear_list(&ls); // Clear the list
    printf("the data has been erased \n");
    if (!delete_list(&ls, &data, 2)) // Try to pop an element from the empty list and check if it fails
        printf("Empty list \n");     // Print a message

    return 0; // Exit with success code
}
