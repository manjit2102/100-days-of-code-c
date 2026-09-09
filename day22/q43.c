/*
*name:manjit
*roll:590041123
*day:22 question:1
*date:31-08-2026
*
*problem statement:
*write a program to check if a number is a strong number.
*/

#include <stdio.h>

int main()
{
    int num, temp, digit, i;
    int fact, sum = 0;

    printf("enter a number:");
    scanf("%d", &num);

    temp = num;

    while(temp != 0)
    {
        digit = temp % 10;
        fact = 1;

        for(i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == num)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not strong number");
    }

    return 0;
}
