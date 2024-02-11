// List.h: Header file for List implementation using linked-list in C

#ifndef LIST_H // Include guard to prevent multiple inclusion
#define LIST_H

#include <stdbool.h> // For bool type

typedef unsigned int u32; // Alias for unsigned int

typedef struct S_data
{
    int ID;
    char name[40];
    float height;
} S_data_t;

#define ELEMENT_TYPE S_data_t // Type of elements in the LIST

// Structure for LIST
typedef struct list_node
{
    ELEMENT_TYPE data;
    struct list_node *next;
    struct list_node *previous;
} List_Node;

typedef struct list
{
    List_Node *head, *current;
    int size, current_pos;
} List;

// Function prototypes

// Initialize the list
void list_init(List *plist);

// Check if a list is full
bool list_full(List *plist);

// Check if a list is empty
bool list_empty(List *plist);

// insert an element to the list
bool insert_list(List *plist, int pos);

// delete an element from the list
bool delete_list(List *plist, ELEMENT_TYPE *element, char *id);

// Get element from the list
bool retrieve_list(List *plist, ELEMENT_TYPE *element, char *id);

// Get the size of the list
u32 size_list(List *plist);

// Clear the list
bool clear_list(List *plist);

void add_record(List_Node *ptr);

int search_list_for_id(List *plist, char *id);

#endif
