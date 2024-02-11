// List.c: Source file for list implementation using linked_list in C

#include "List.h"   // Include header file
#include <stdio.h>  // For input/output functions
#include <stdlib.h> // For exit function
#include <string.h>
// Initialize the list
void list_init(List *plist)
{
    plist->size = 0;
    plist->current_pos = -1;
    plist->head = NULL;
    plist->current = NULL;
}

// Check if a list is full
bool list_full(List *plist)
{
    return (false);
}

// Check if a list is empty
bool list_empty(List *plist)
{
    return (!plist->size);
}

// insert an element to the list
bool insert_list(List *plist, int pos)
{

    if ((pos < 0) || (pos >= (plist->size + 1)) || list_full(plist))
    {
        return false;
    }
    List_Node *ptr = (List_Node *)malloc(sizeof(List_Node));
    add_record(ptr);
    ptr->next = NULL;
    ptr->previous = NULL;
    if (pos == 0)
    {
        ptr->next = plist->head;
        if (plist->head)
        {
            plist->head->previous = ptr;
        }
        plist->head = ptr;
        plist->current = plist->head;
        plist->current_pos = 0;
    }
    else
    {
        if (pos <= plist->current_pos)
        {
            while (plist->current_pos != pos - 1)
            {
                plist->current = plist->current->previous;
                plist->current_pos--;
            }
        }
        else
        {
            while (plist->current_pos != pos - 1)
            {
                plist->current = plist->current->next;
                plist->current_pos++;
            }
        }
        if (!(plist->current->next))
        {
            ptr->next = NULL;
            ptr->previous = plist->current;
            plist->current->next = ptr;
            plist->current = ptr;
            plist->current_pos++;
        }
        else
        {
            ptr->next = plist->current;
            ptr->previous = plist->current->previous;
            plist->current->previous = ptr;
            plist->current = ptr;
            plist->current->previous->next = ptr;
        }
    }
    plist->size++;
    return true;
}

// delete an element from the list
bool delete_list(List *plist, ELEMENT_TYPE *element, char *id)
{
    int pos = search_list_for_id(plist, id);
    if (pos < 0 || pos >= plist->size || list_empty(plist))
    {
        return false;
    }
    List_Node *ptr;
    if (pos == 0)
    {
        plist->current = plist->head;
        *element = plist->current->data;
        plist->head = plist->current->next;
        free(plist->current);
        plist->current = plist->head;
        plist->current_pos = 0;
    }
    else
    {
        List_Node *ptr = NULL;
        while (plist->current_pos != pos)
        {
            if (pos <= plist->current_pos)
            {
                plist->current = plist->current->previous;
                plist->current_pos--;
            }
            else
            {
                plist->current = plist->current->next;
                plist->current_pos++;
            }
        }
        *element = plist->current->data;
        ptr = plist->current->previous;
        ptr->next = plist->current->next;
        if (plist->current->next)
        {
            ptr = plist->current->next;
            ptr->previous = plist->current->previous;
            ptr = plist->current->previous;
        }
        else
        {
            ptr = plist->current->previous;
            ptr->next = NULL;
        }
        free(plist->current);
        plist->current = ptr;
        plist->current_pos = pos - 1;
    }
    plist->size--;
    return true;
}

// Get element from the list
bool retrieve_list(List *plist, ELEMENT_TYPE *element, char *id)
{
    int pos = search_list_for_id(plist, id);
    if (pos < 0 || pos >= plist->size || list_empty(plist))
    {
        return false;
    }
    else
    {
        if (pos >= plist->current_pos)
        {
            while (plist->current_pos != pos)
            {
                plist->current = plist->current->next;
                plist->current_pos++;
            }
            *element = plist->current->data;
        }
        else
        {
            while (plist->current_pos != pos)
            {
                plist->current = plist->current->previous;
                plist->current_pos--;
            }
            *element = plist->current->data;
        }
        return true;
    }
}

// Get the size of the list
u32 size_list(List *plist)
{
    return (plist->size);
}

// Clear the list

bool clear_list(List *plist)
{
    plist->current = plist->head;
    while (plist->head)
    {
        plist->current = plist->head->next;
        free(plist->head);
        plist->head = plist->current;
    }
    plist->size = 0;
    plist->current_pos = -1;
    plist->current = NULL;
    return true;
}

void add_record(List_Node *ptr)
{
    char temp_t[40];
    printf("\n enter the id : ");
    gets(temp_t);
    ptr->data.ID = atoi(temp_t);
    printf("\n enter student full name : ");
    gets(ptr->data.name);
    printf("\n enter height : ");
    gets(temp_t);
    ptr->data.height = atof(temp_t);
}

int search_list_for_id(List *plist, char *id)
{
    int i = 0;
    List_Node *ptr = plist->head;
    while (ptr)
    {
        if (ptr->data.ID == atoi(id))
        {
            break;
        }
        ptr = ptr->next;
        i++;
    }
    return i;
}