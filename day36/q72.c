/*
name:manjit
roll:590041123
day:36 question:2
date:14-09-2026

Q72: Find the sum of all elements in a matrix.
*/

#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j, sum = 0;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
