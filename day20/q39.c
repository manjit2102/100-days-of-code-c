/*
*name:manjit
*roll:590041123
*day:20 question:1
*date:29-08-2026
*
*problem statement:
*write a program to find the product of odd digits of a number.
*/

#include <stdio.h>

int main()
{
    int num, digit, product = 1;

    printf("enter a number:");
    scanf("%d", &num);

    while(num != 0)
    {
        digit = num % 10;

        if(digit % 2 != 0)
        {
            product = product * digit;
        }

        num = num / 10;
    }

    printf("%d", product);

    return 0;
}
