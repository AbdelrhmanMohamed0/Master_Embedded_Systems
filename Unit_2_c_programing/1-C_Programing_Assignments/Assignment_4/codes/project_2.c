/*
 ============================================================================
 Name        : project_2
 Author      : Abdelrhman mohamed
 Description : C Program to Add Two Distances (in inch-feet) System Using
               Structures
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct distance
{
    int feet;
    float inch;
} Distance;
Distance dist[3];
int main(void)
{
    printf("please enter first distance in feet : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &dist[0].feet);
    printf("please enter first distance in inch : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &dist[0].inch);
    printf("please enter second distance in feet : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &dist[1].feet);
    printf("please enter second distance in inch : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &dist[1].inch);
    dist[2].feet = dist[0].feet + dist[1].feet;
    dist[2].inch = dist[0].inch + dist[1].inch;
    while (dist[2].inch >= 12)
    {
        (dist[2].feet)++;
        dist[2].inch -= 12;
    }
    printf("sum of distance = : %d\'-%.1f\"", dist[2].feet, dist[2].inch);
    return 0;
}
