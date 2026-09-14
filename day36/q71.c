/*
name:manjit
roll:590041123
day:36 question:1
date:14-09-2026

Q71: Read and print a matrix.
*/

#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
