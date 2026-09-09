/*
*name:manjit
*roll:590041123
*day:24 question:2
*date:02-09-2026
*
*problem statement:
*write a program to print the following pattern:
*1
*12
*123
*1234
*12345
*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
