// Main.c: Test file for queue implementation using linked-list in C

#include <stdio.h>  // For input/output functions
#include <stdlib.h> // For exit function
#include "Queue.h"  // Include header file

// Function to display an element
void display(ELEMENT_TYPE element)
{
    printf("%d \n", element); // Print the element followed by a newline
}

// Main function
int main(void)
{
    Queue s;                          // Declare a queue variable
    ELEMENT_TYPE element, data, size; // Declare some variables to store elements, data, and size

    queue_init(&s); // Initialize the queue

    in_queue(&s, 8);
    in_queue(&s, 9);

    queue_top(&s, &data);              // Get the top element of the queue and store it in data
    printf("Top data is %d \n", data); // Print the data

    in_queue(&s, 17);
    in_queue(&s, 20);

    de_queue(&s,&data);           // Pop an element from the queue and store it in data
    printf("poped data is %d \n", data); // Print the data

    traverse_queue(&s, &display); // Traverse the queue and display each element

    size = size_queue(&s);               // Get the size of the queue and store it in size
    printf("Queue size is %d \n", size); // Print the size

    clear_queue(&s); // Clear the queue
    printf("the data has been erased \n");
    if (!de_queue(&s, &data))     // Try to pop an element from the empty queue and check if it fails
        printf("Empty Queue \n"); // Print a message

    return 0; // Exit with success code
}
