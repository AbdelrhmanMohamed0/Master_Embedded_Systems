// List.h: Header file for List implementation using array in C

#ifndef LIST_H // Include guard to prevent multiple inclusion
#define LIST_H

#include <stdbool.h> // For bool type

#define MAXSIZE 100       // Maximum size of the LIST
typedef unsigned int u32; // Alias for unsigned int
#define ELEMENT_TYPE u32  // Type of elements in the LIST

// Structure for LIST
typedef struct list
{
    ELEMENT_TYPE array[MAXSIZE]; // Array to store elements
    u32 size;                    // Size of the list
} List;

// Function prototypes

// Initialize the list
void list_init(List *plist);

// Check if a list is full
bool list_full(List *plist);

// Check if a list is empty
bool list_empty(List *plist);

// insert an element to the list
bool insert_list(List *plist, ELEMENT_TYPE element,int pos);

// delete an element from the list
bool delete_list(List *plist,ELEMENT_TYPE *element,int pos);

// Get element from the list
bool retrieve_list(List *plist, ELEMENT_TYPE *element,int pos);

// Replace an element from the list
bool replace_list(List *plist, ELEMENT_TYPE element,int pos);

// Traverse the list as queue and apply a function to each element
void traverse_list_as_queue(List *plist, void (*func)(ELEMENT_TYPE));

// Traverse the list as stack and apply a function to each element
void traverse_list_as_stack(List *plist, void (*func)(ELEMENT_TYPE));

// Get the size of the list
u32 size_list(List *plist);

// Clear the list
void clear_list(List *plist);

#endif
