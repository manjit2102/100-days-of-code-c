/*
name:manjit
roll:590041123
day:43 question:2
date:21-09-2026

Q86: Check if a string is a palindrome.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, flag = 1;

    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
