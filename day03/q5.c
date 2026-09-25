/*
name:manjit
roll:590041123
day:3 question:1
date:12-08-2026

Q5: Write a program to convert temperature from Celsius to Fahrenheit.
*/

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit=%.0f", fahrenheit);

    return 0;
}
