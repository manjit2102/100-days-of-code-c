/*
*name:manjit
*roll:590041123
*day:25 question:1
*date:03-09-2026
*
*problem statement:
*write a program to print the following pattern:
*5
*45
*345
*2345
*12345
*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        for(j = i; j <= 5; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
