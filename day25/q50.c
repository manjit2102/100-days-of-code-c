/*
*name:manjit
*roll:590041123
*day:25 question:2
*date:03-09-2026
*
*problem statement:
*write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf(" ");
        }

        for(j = i; j < 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
