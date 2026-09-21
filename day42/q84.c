/*
name:manjit
roll:590041123
day:42 question:2
date:20-09-2026

Q84: Convert a lowercase string to uppercase without using built-in functions.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("%s", str);

    return 0;
}
