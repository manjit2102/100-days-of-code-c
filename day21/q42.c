/*
*name:manjit
*roll:590041123
*day:21 question:2
*date:30-08-2026
*
*problem statement:
*write a program to check if a number is a perfect number.
*/

#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    printf("enter a number:");
    scanf("%d", &num);

    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == num)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not perfect number");
    }

    return 0;
}
