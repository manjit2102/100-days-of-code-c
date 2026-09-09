/*
*name:manjit
*roll:590041123
*day:20 question:2
*date:29-08-2026
*
*problem statement:
*write a program to find the 1's complement of a binary number and print it.
*/

#include <stdio.h>

int main()
{
    char binary[100];
    int i;

    printf("enter a binary number:");
    scanf("%s", binary);

    for(i = 0; binary[i] != '\0'; i++)
    {
        if(binary[i] == '0')
        {
            binary[i] = '1';
        }
        else if(binary[i] == '1')
        {
            binary[i] = '0';
        }
    }

    printf("%s", binary);

    return 0;
}
