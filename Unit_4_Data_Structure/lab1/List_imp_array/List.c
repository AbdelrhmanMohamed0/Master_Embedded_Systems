// List.c: Source file for list implementation using array in C

#include "List.h" // Include header file
// Initialize the list
void list_init(List *plist)
{
    plist->size = 0;
}

// Check if a list is full
bool list_full(List *plist)
{
    return (plist->size == MAXSIZE);
}

// Check if a list is empty
bool list_empty(List *plist)
{
    return (!plist->size);
}

// insert an element to the list
bool insert_list(List *plist, ELEMENT_TYPE element, int pos)
{
    if (!list_full(plist))
    {
        for (int i = plist->size - 1; i >= pos; i--)
        {
            plist->array[i + 1] = plist->array[i];
        }
        plist->array[pos] = element;
        plist->size++;
        return true;
    }
    else
    {
        return false;
    }
}

// delete an element from the list
bool delete_list(List *plist, ELEMENT_TYPE *element, int pos)
{
    if (!list_empty(plist))
    {
        *element = plist->array[pos];
        for (int i = pos + 1; i <= plist->size - 1; i++)
        {
            plist->array[i - 1] = plist->array[i];
        }
        plist->size--;
        return true;
    }
    else
    {
        return false;
    }
}

// Get element from the list
bool retrieve_list(List *plist, ELEMENT_TYPE *element, int pos)
{
    if (!list_empty(plist))
    {
        *element = plist->array[pos];
        return true;
    }
    else
    {
        return false;
    }
}

// Replace an element from the list
bool replace_list(List *plist, ELEMENT_TYPE element, int pos)
{
    if (!list_empty(plist))
    {
        plist->array[pos] = element;
        return true;
    }
    else
    {
        return false;
    }
}

// Traverse a list as stack and apply a function to each element
void traverse_list_as_stack(List *plist, void (*func)(ELEMENT_TYPE))
{
    for (int i = plist->size - 1; i >= 0; i--)
    {
        func(plist->array[i]);
    }
}

// Traverse a list as queue and apply a function to each element
void traverse_list_as_queue(List *plist, void (*func)(ELEMENT_TYPE))
{
    for (int i = 0; i < plist->size; i++)
    {
        func(plist->array[i]);
    }
}

// Get the size of the list
u32 size_list(List *plist)
{
    return (plist->size);
}

// Clear the list
void clear_list(List *plist)
{
    plist->size = 0;
}