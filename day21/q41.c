/*
*name:manjit
*roll:590041123
*day:21 question:1
*date:30-08-2026
*
*problem statement:
*write a program to swap the first and last digit of a number.
*/

#include <stdio.h>

int main()
{
    int num, first, last, temp, divisor = 1, middle;

    printf("enter a number:");
    scanf("%d", &num);

    temp = num;
    last = num % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    middle = (num % divisor) / 10;

    num = last * divisor + middle * 10 + first;

    printf("%d", num);

    return 0;
}
