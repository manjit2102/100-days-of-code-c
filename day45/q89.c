/*
Name: manjit
Roll: 590041123
Day: 42
Question: 1
Date: 23-09-2026

Q89: Count frequency of a given character in a string.
*/

#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, count = 0;

    scanf("%s", str);
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
