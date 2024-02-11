// Stack.h: Header file for Queue implementation using linked-list in C

#ifndef QUEUE_H // Include guard to prevent multiple inclusion
#define QUEUE_H

#include <stdbool.h> // For bool type

typedef unsigned int u32; // Alias for unsigned int
#define ELEMENT_TYPE u32  // Type of elements in the Queue

// Structure for Queue
typedef struct queuenode
{
ELEMENT_TYPE data;
struct queuenode *next;
} QueueNode;

typedef struct queue
{
    QueueNode *front;
    QueueNode *rear;
    u32 size;
}Queue;

// Function prototypes

// Initialize a queue
void queue_init(Queue *ptqueue);

// Check if a queue is full
bool queue_full(Queue *ptqueue);

// Check if a queue is empty
bool queue_empty(Queue *ptqueue);

// Push an element to a queue
bool in_queue(Queue *ptqueue, ELEMENT_TYPE element);

// Pop an element from a queue
bool de_queue(Queue *ptqueue,ELEMENT_TYPE *element);

// Get the top element of a queue
bool queue_top(Queue *ptqueue, ELEMENT_TYPE *element);

// Traverse a queue and apply a function to each element
void traverse_queue(Queue *ptqueue, void (*func)(ELEMENT_TYPE));

// Get the size of a queue
u32 size_queue(Queue *ptqueue);

// Clear a queue
void clear_queue(Queue *ptqueue);

#endif
