/*
*name:manjit
*roll:590041123
*day:19 question:2
*date:28-08-2026
*
*problem statement:
*write a program to find the sum of digits of a number.
*/

#include <stdio.h>

int main()
{
    int num, digit, sum = 0;

    printf("enter a number:");
    scanf("%d", &num);

    while(num != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("%d", sum);

    return 0;
}
