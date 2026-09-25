/*
name:manjit
roll:590041123
day:2 question:1
date:11-08-2026

Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/

#include <stdio.h>

int main()
{
    int length, breadth, area, perimeter;

    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area=%d, Perimeter=%d", area, perimeter);

    return 0;
}
