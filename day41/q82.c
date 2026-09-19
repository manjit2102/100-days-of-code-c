/*
name:manjit
roll:590041123
day:41 question:2
date:19-09-2026

Q82: Print each character of a string on a new line.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
    {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
