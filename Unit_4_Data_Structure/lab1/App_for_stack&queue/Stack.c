// Stack.c: Source file for stack implementation 
#include "Stack.h" // Include header file
#ifdef STACK_LINKEDLIST
// Initialize a stack
void stack_init(Stack *stack)
{
    stack->size = 0;
    stack->top = NULL;
    stack->min = __INT32_MAX__;
    stack->max = 0;
}

// Check if a stack is full
bool stack_full(Stack *stack)
{
    return 0;
}

// Check if a stack is empty
bool stack_empty(Stack *stack)
{
    return (stack->size == 0 || stack->top == NULL);
}

// Push an element to a stack
bool push_stack(Stack *stack, ELEMENT_TYPE element)
{
    if (!stack_full(stack)) // If the stack is not full
    {
        if (element.u32_element < stack->min)
            stack->min = element.u32_element;
        if (element.u32_element > stack->max)
            stack->max = element.u32_element;
        StackNode *ptr = (StackNode *)malloc(sizeof(StackNode));
        ptr->data = element;
        ptr->next = stack->top;
        stack->top = ptr;
        stack->size++;
    }
    else              // If the stack is full
        return false; // Return false to indicate failure
}

// Pop an element from a stack
bool pop_stack(ELEMENT_TYPE *element, Stack *stack)
{
    if (!stack_empty(stack)) // If the stack is not empty
    {
        if (stack->top->data.u32_element == stack->min)
        {
            StackNode *ptr=NULL;
            stack->min = __INT32_MAX__;
            ptr=stack->top;
            for (u32 i = 0; i < stack->size - 1; i++)
            {
                if (ptr->data.u32_element < stack->min)
                    stack->min = ptr->data.u32_element;
                    ptr=ptr->next;
            }
        }
        else if (stack->top->data.u32_element == stack->max)
        {
            StackNode *ptr=NULL;
            stack->max = 0;
            ptr=stack->top;
            for (u32 i = 0; i < stack->size - 1; i++)
            {
                if (ptr->data.u32_element > stack->max)
                    stack->max = ptr->data.u32_element;
                    ptr=ptr->next;
            }
        }
        StackNode *ptr = NULL;
        *element = stack->top->data;
        stack->size--;
        ptr = stack->top;
        stack->top = stack->top->next;
        free(ptr);
    }
    else              // If the stack is empty
        return false; // Return false to indicate failure
}

// Get the top element of a stack
bool stack_top(Stack *stack, ELEMENT_TYPE *element)
{
    if (!stack_empty(stack)) // If the stack is not empty
    {
        *element = stack->top->data;
    }
    else              // If the stack is empty
        return false; // Return false to indicate failure
}

// Traverse a stack and apply a function to each element
void traverse_stack(Stack *stack, void (*func)(ELEMENT_TYPE))
{
    StackNode *ptr = stack->top;
    while (ptr)
    {
        func(ptr->data);
        ptr= ptr->next;
    }
}

// Get the size of a stack
u32 size_stack(Stack *stack)
{
    return stack->size;
}

// Clear a stack
void clear_stack(Stack *stack)
{
    StackNode *ptr = NULL;
    while (stack->top)
    {
        ptr = stack->top;
        stack->top = stack->top->next;
        stack->size--;
        free(ptr);
    }
}

// find minimum element in stack
u32 stack_min(Stack *stack)
{
    return (stack->min);
}

// find maximum element in stack
u32 stack_max(Stack *stack)
{
    return (stack->max);
}
#else

// Initialize a stack
void stack_init(Stack *stack)
{
    stack->top = 0; // Set top index to 0
    stack->min = __INT32_MAX__;
    stack->max = 0;
}

// Check if a stack is full
bool stack_full(Stack *stack)
{
    return stack->top >= MAXSIZE; // Return true if top index is equal or greater than max size
}

// Check if a stack is empty
bool stack_empty(Stack *stack)
{
    return stack->top == 0; // Return true if top index is 0
}

// Push an element to a stack
bool push_stack(Stack *stack, ELEMENT_TYPE element)
{
    if (!stack_full(stack)) // If the stack is not full
    {
        stack->array[stack->top++] = element; // Assign the element to the array at top index and increment top index by 1
        if (element.u32_element < stack->min)
            stack->min = element.u32_element;
        if (element.u32_element > stack->max)
            stack->max = element.u32_element;
        return true; // Return true to indicate success
    }
    else              // If the stack is full
        return false; // Return false to indicate failure
}

// Pop an element from a stack
bool pop_stack(ELEMENT_TYPE *element, Stack *stack)
{
    if (!stack_empty(stack)) // If the stack is not empty
    {
        if (stack->array[stack->top - 1].u32_element == stack->min)
        {
            stack->min = __INT32_MAX__;
            for (u32 i = 0; i < stack->top - 1; i++)
            {
                if (stack->array[i].u32_element < stack->min)
                    stack->min = stack->array[i].u32_element;
            }
        }
        else if (stack->array[stack->top - 1].u32_element == stack->max)
        {
            stack->max = 0;
            for (u32 i = 0; i < stack->top - 1; i++)
            {
                if (stack->array[i].u32_element > stack->max)
                    stack->max = stack->array[i].u32_element;
            }
        }
        *element = stack->array[--stack->top]; // Assign the array element at top index minus 1 to the output parameter and decrement top index by 1
        return true;                           // Return true to indicate success
    }
    else              // If the stack is empty
        return false; // Return false to indicate failure
}

// Get the top element of a stack
bool stack_top(Stack *stack, ELEMENT_TYPE *element)
{
    if (!stack_empty(stack)) // If the stack is not empty
    {
        *element = stack->array[stack->top - 1]; // Assign the array element at top index minus 1 to the output parameter
        return true;                             // Return true to indicate success
    }
    else              // If the stack is empty
        return false; // Return false to indicate failure
}

// Traverse a stack and apply a function to each element
void traverse_stack(Stack *stack, void (*func)(ELEMENT_TYPE))
{
    for (u32 i = stack->top; i > 0; i--) // Loop from top index to 1
    {
        func(stack->array[i - 1]); // Call the function with the array element at i-1 as argument
    }
}

// Get the size of a stack
u32 size_stack(Stack *stack)
{
    return stack->top; // Return the top index as the size
}

// Clear a stack
void clear_stack(Stack *stack)
{
    stack->top = 0; // Set top index to 0
}

// find minimum element in stack
u32 stack_min(Stack *stack)
{
    return (stack->min);
}

// find maximum element in stack
u32 stack_max(Stack *stack)
{
    return (stack->max);
}
#endif