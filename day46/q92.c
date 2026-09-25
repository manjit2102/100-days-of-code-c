/*
name:manjit
roll:590041123
day:43 question:2
date:24-09-2026

Q92: Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, j;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                printf("%c", str[i]);
                return 0;
            }
        }
    }

    return 0;
}
