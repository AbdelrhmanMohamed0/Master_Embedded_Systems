// Stack.c: Source file for queue implementation using array in C

#include "Queue.h" // Include header file

// Initialize a queue
void queue_init(Queue *ptqueue)
{
    ptqueue->size = 0;
    ptqueue->front = 0;
    ptqueue->rear = -1;
}

// Check if a queue is full
bool queue_full(Queue *ptqueue)
{
    return (ptqueue->size == MAXSIZE);
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
        ptqueue->rear = (ptqueue->rear + 1) % MAXSIZE;
        ptqueue->array[ptqueue->rear] = element;
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
        *element = ptqueue->array[ptqueue->front];
        ptqueue->front = (ptqueue->front + 1) % MAXSIZE;
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
        *element = ptqueue->array[ptqueue->front];
        return (true);
    }
    return (false);
}

// Traverse a queue and apply a function to each element
void traverse_queue(Queue *ptqueue, void (*func)(ELEMENT_TYPE))
{
    u32 pos, count;
    for (pos = ptqueue->front, count = 0; count < ptqueue->size; count++)
    {
        (*func)(ptqueue->array[pos]);
        pos = (pos + 1) % MAXSIZE;
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
    ptqueue->front = 0;
    ptqueue->size = 0;
    ptqueue->rear = -1;
}
