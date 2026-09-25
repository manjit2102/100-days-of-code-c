/*
name:manjit
roll:590041123
day:3 question:2
date:12-08-2026

Q6: Write a program to swap two numbers using a third variable.
*/

#include <stdio.h>

int main()
{
    int a, b, temp;

    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: %d %d", a, b);

    return 0;
}
