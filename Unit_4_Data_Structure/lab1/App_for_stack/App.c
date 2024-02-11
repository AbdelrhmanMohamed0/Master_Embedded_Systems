// Main.c: Test file for stack implementation using linked-list in C
#include "Stack.h" // Include header file
#include "math.h"

void Infix_To_Postfix(u8 *array, Stack *postfix);
void display(ELEMENT_TYPE ch);
int Is_digit(u8 ch);
int Is_unery_operator(u8 op);
int Precedance_element1_is_grater(ELEMENT_TYPE element_1, ELEMENT_TYPE element_2);
f64 Evaluate_Postfix(Stack *postfix);
f64 DO_operation(ELEMENT_TYPE poped_element1, ELEMENT_TYPE poped_element2, ELEMENT_TYPE poped_element);

// Main function
int main(void)
{
    u8 array[] = "1+2*3^4/5-6";
    ELEMENT_TYPE temp;
    Stack s1, s2;
    stack_init(&s1);
    stack_init(&s2);
    Infix_To_Postfix(array, &s1);
    for (u32 c = size_stack(&s1); c > 0; c--)
    {
        pop_stack(&temp, &s1);
        push_stack(&s2, temp);
    }
    traverse_stack(&s2, &display);
    f64 res = Evaluate_Postfix(&s2);
    printf("\nresult = %lf \n", res);
    return 0; // Exit with success code
}
void Infix_To_Postfix(u8 *array, Stack *postfix)
{
    Stack check;
    ELEMENT_TYPE top_element, poped_element, element;
    stack_init(&check);
    while (*array)
    {
        if (Is_digit(*array))
        {
            element.u8_element = *array;
            push_stack(postfix, element);
        }
        else if (Is_unery_operator(*array))
        {
            element.u8_element = *array;
            while (!stack_empty(&check) && Precedance_element1_is_grater(top_element, element))
            {
                pop_stack(&poped_element, &check);
                push_stack(postfix, poped_element);
                stack_top(&check, &top_element);
            }
            push_stack(&check, element);
            stack_top(&check, &top_element);
        }
        array++;
    }
    while (!stack_empty(&check))
    {
        pop_stack(&poped_element, &check);
        push_stack(postfix, poped_element);
    }
}

void display(ELEMENT_TYPE ch)
{
    printf("%c", ch.u8_element);
}
int Is_digit(u8 ch)
{
    return (!(ch <= '0' || ch >= '9'));
}

int Is_unery_operator(u8 op)
{
    return (op == '+' || op == '-' || op == '*' || op == '/' || op == '^');
}

int Precedance_element1_is_grater(ELEMENT_TYPE element_1, ELEMENT_TYPE element_2)
{
    if (element_1.u8_element == '^')
        return 1;
    else if (element_1.u8_element == '*' || element_1.u8_element == '/')
    {
        return (!(element_2.u8_element == '^'));
    }
    else
    {
        return (!(element_2.u8_element == '^' || element_2.u8_element == '*' || element_2.u8_element == '/'));
    }
}

f64 Evaluate_Postfix(Stack *postfix)
{
    Stack temp;
    stack_init(&temp);
    ELEMENT_TYPE poped_element;
    while (!stack_empty(postfix))
    {
        pop_stack(&poped_element, postfix);
        if (Is_digit(poped_element.u8_element))
        {
            ELEMENT_TYPE res;
            res.f64_element = (poped_element.u8_element - '0');
            push_stack(&temp, res);
        }
        else
        {
            ELEMENT_TYPE poped_element1, poped_element2, result;
            pop_stack(&poped_element2, &temp);
            pop_stack(&poped_element1, &temp);
            result.f64_element = DO_operation(poped_element1, poped_element2, poped_element);
            push_stack(&temp, result);
        }
    }
    pop_stack(&poped_element, &temp);
    return poped_element.f64_element;
}
f64 DO_operation(ELEMENT_TYPE poped_element1, ELEMENT_TYPE poped_element2, ELEMENT_TYPE poped_element)
{
    switch (poped_element.u8_element)
    {
    case '+':
        return (poped_element1.f64_element + poped_element2.f64_element);
        break;
    case '-':
        return (poped_element1.f64_element - poped_element2.f64_element);
        break;
    case '*':
        return (poped_element1.f64_element * poped_element2.f64_element);
        break;
    case '/':
        return (poped_element1.f64_element / poped_element2.f64_element);
        break;
    case '^':
        return (pow(poped_element1.f64_element, poped_element2.f64_element));
        break;
    default:
        break;
    }
}
