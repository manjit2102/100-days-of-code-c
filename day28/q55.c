/*
*name:manjit
*roll:590041123
*day:28 question:1
*date:06-09-2026
*
*problem statement:
*write a program to print all the prime numbers from 1 to n.
*/

#include <stdio.h>

int main()
{
    int n, i, j, count;

    printf("enter a number:");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
