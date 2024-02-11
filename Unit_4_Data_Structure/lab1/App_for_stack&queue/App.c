// Main.c: Test file for queue implementation using linked-list in C

#include <stdio.h>  // For input/output functions
#include <stdlib.h> // For exit function
#include "Queue.h"  // Include header file
#include "Stack.h"
// Function to display an element
void display(ELEMENT_TYPE element)
{
    printf("%d \n", element.u32_element); // Print the element followed by a newline
}

// Main function
int main(void)
{
    Queue q;                          // Declare a queue variable
    Stack s;                          // Declare a stack variable
    ELEMENT_TYPE element, data, size; // Declare some variables to store elements, data, and size
    stack_init(&s);                   // Initialize the stack
    element.u32_element = 20;
    push_stack(&s, element); // Push the element to the stack
    element.u32_element = 100;
    push_stack(&s, element);

    stack_top(&s, &data);                          // Get the top element of the stack and store it in data
    printf("Top data is %d \n", data.u32_element); // Print the data
    element.u32_element = 1;
    push_stack(&s, element);
    element.u32_element = 22;
    push_stack(&s, element);

    pop_stack(&data, &s);                             // Pop an element from the stack and store it in data
    printf("Popped data is %d \n", data.u32_element); // Print the data

    traverse_stack(&s, &display); // Traverse the stack and display each element

    size.u32_element = size_stack(&s);               // Get the size of the stack and store it in size
    printf("Stack size is %d \n", size.u32_element); // Print the size

    printf("max element is %d\n", stack_max(&s));
    printf("min element is %d\n", stack_min(&s));
    clear_stack(&s); // Clear the stack

    if (!pop_stack(&data, &s))    // Try to pop an element from the empty stack and check if it fails
        printf("Empty stack \n"); // Print a message

    queue_init(&q); // Initialize the queue
    element.u32_element = 8;
    in_queue(&q, element);
    element.u32_element = 9;
    in_queue(&q, element);

    queue_top(&q, &data);                          // Get the top element of the queue and store it in data
    printf("Top data is %d \n", data.u32_element); // Print the data
    element.u32_element = 17;
    in_queue(&q, element);
    element.u32_element = 20;
    in_queue(&q, element);

    de_queue(&q, &data);                             // Pop an element from the queue and store it in data
    printf("poped data is %d \n", data.u32_element); // Print the data

    traverse_queue(&q, &display); // Traverse the queue and display each element

    size.u32_element = size_queue(&q);               // Get the size of the queue and store it in size
    printf("Queue size is %d \n", size.u32_element); // Print the size

    clear_queue(&q); // Clear the queue
    printf("the data has been erased \n");
    if (!de_queue(&q, &data))     // Try to pop an element from the empty queue and check if it fails
        printf("Empty Queue \n"); // Print a message

    return 0; // Exit with success code
}
