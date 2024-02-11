// Stack.c: Source file for queue implementation using array in C

#include "Queue.h" // Include header file
#include <stdio.h>
#include <stdlib.h>
// Initialize a queue
void queue_init(Queue *ptqueue)
{
    ptqueue->front = NULL;
    ptqueue->rear = NULL;
    ptqueue->size = 0;
}

// Check if a queue is full
bool queue_full(Queue *ptqueue)
{
    return (0);
}

// Check if a queue is empty
bool queue_empty(Queue *ptqueue)
{
    return (!(ptqueue->size));
}

// Push an element to a queue
bool in_queue(Queue *ptqueue, ELEMENT_TYPE element)
{
    if (!queue_full(ptqueue))
    {
        QueueNode *ptr = (QueueNode *)malloc(sizeof(QueueNode));
        ptr->data = element;
        ptr->next = NULL;
        if (!ptqueue->rear)
            ptqueue->front = ptr;
        else
            ptqueue->rear->next = ptr;
        ptqueue->rear = ptr;
        ptqueue->size++;
        return (true);
    }
    return (false);
}

// Pop an element from a queue
bool de_queue(Queue *ptqueue, ELEMENT_TYPE *element)
{
    if (!queue_empty(ptqueue))
    {
        QueueNode *ptr = ptqueue->front;
        *element = ptr->data;
        ptqueue->front = ptr->next;
        free(ptr);
        if (!ptqueue->front)
            ptqueue->rear = NULL;
        ptqueue->size--;
        return (true);
    }
    return (false);
}

// Get the top element of a queue
bool queue_top(Queue *ptqueue, ELEMENT_TYPE *element)
{
    if (!queue_empty(ptqueue))
    {
        *element = ptqueue->front->data;
        return (true);
    }
    return (false);
}

// Traverse a queue and apply a function to each element
void traverse_queue(Queue *ptqueue, void (*func)(ELEMENT_TYPE))
{
    QueueNode *ptr = NULL;
    for (ptr = ptqueue->front; ptr; ptr = ptr->next)
    {
        (*func)(ptr->data);
    }
}

// Get the size of a queue
u32 size_queue(Queue *ptqueue)
{
    return (ptqueue->size);
}

// Clear a queue
void clear_queue(Queue *ptqueue)
{
    while (ptqueue->front)
    {
        ptqueue->rear = ptqueue->front->next;
        free(ptqueue->front);
        ptqueue->front = ptqueue->rear;
    }
    ptqueue->size = 0;
}
