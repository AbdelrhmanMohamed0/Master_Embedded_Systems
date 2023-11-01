/*
 ============================================================================
 Name        : project_5
 Author      : Abdelrhman mohamed
 Description : C Program to find area of a circle, passing arguments to macros.
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#define pi 22/7.0
#define Area(r) (pi*r*r)   
int main(){
    float radius,area_circle;
printf("enter radius of circle \n");
fflush(stdout);
fflush(stdin);
scanf("%f",&radius);
area_circle=Area(radius);
printf("area of circle = %.2f\n",area_circle);
return 0;
}
