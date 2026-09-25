/*
name:manjit
roll:590041123
day:44 question:2
date:25-09-2026

Q94: Find the longest word in a sentence.
*/

#include <stdio.h>

int main()
{
    char str[100], word[100], longest[100];
    int i = 0, j = 0, max = 0;

    fgets(str, 100, stdin);

    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\n')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            if(j > max)
            {
                max = j;

                for(int k = 0; k <= j; k++)
                {
                    longest[k] = word[k];
                }
            }

            j = 0;
        }

        i++;
    }

    word[j] = '\0';

    if(j > max)
    {
        for(int k = 0; k <= j; k++)
        {
            longest[k] = word[k];
        }
    }

    printf("%s", longest);

    return 0;
}
