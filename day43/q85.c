/*
name:manjit
roll:590041123
day:43 question:1
date:21-09-2026

Q85: Reverse a string.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;

    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    for(i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
