/*
 ============================================================================
 Name        : project_3
 Author      : Abdelrhman mohamed
 Description : C Program to Add Two Complex Numbers by Passing Structure to a
               Function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct complex
{
    float real;
    float imag;
} Complex;
Complex num1, num2, sum;

void sum_complex_number(Complex *num1, Complex *num2);

int main(void)
{
    printf("please enter first real number : ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &num1.real);
    printf("please enter first imaginary number : ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &num1.imag);
    printf("please enter second real number : ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &num2.real);
    printf("please enter second imaginary number : ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &num2.imag);
    sum_complex_number(&num1, &num2);
    return 0;
}
void sum_complex_number(Complex *num1, Complex *num2)
{
    sum.real = num1->real + num2->real;
    sum.imag = num1->imag + num2->imag;
    printf("sum = %.2f + %.2fi", sum.real, sum.imag);
}
