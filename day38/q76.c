/*
name:manjit
roll:590041123
day:38 question:2
date:16-09-2026

Q76: Check if a matrix is symmetric.
*/

#include <stdio.h>

int main()
{
    int r, c, a[10][10];
    int i, j, symmetric = 1;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if(r != c)
    {
        symmetric = 0;
    }
    else
    {
        for(i = 0; i < r; i++)
        {
            for(j = 0; j < c; j++)
            {
                if(a[i][j] != a[j][i])
                {
                    symmetric = 0;
                    break;
                }
            }
        }
    }

    if(symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
