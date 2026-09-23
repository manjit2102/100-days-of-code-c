/*
Name: manjit
Roll: 590041123
Day: 42
Question: 2
Date: 23-09-2026

Q90: Toggle case of each character in a string.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("%s", str);

    return 0;
}
