/*
name:manjit
roll:590041123
day:41 question:1
date:19-09-2026

Q81: Count characters in a string without using built-in length functions.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;

    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0' && str[count] != '\n')
    {
        count++;
    }

    printf("%d", count);

    return 0;
}
