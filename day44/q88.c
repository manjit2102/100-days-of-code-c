/*
Name: manjit
Roll: 590041123
Day: 41
Question: 2
Date: 22-09-2026

Q88: Replace spaces with hyphens in a string.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            str[i] = '-';
        }
    }

    printf("%s", str);

    return 0;
}
