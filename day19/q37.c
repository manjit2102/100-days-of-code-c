/*
*name:manjit
*roll:590041123
*day:19 question:1
*date:28-08-2026
*
*problem statement:
*write a program to find the LCM of two numbers.
*/

#include <stdio.h>

int main()
{
    int a, b, max;

    printf("enter two numbers:");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while(1)
    {
        if(max % a == 0 && max % b == 0)
        {
            printf("%d", max);
            break;
        }

        max++;
    }

    return 0;
}
