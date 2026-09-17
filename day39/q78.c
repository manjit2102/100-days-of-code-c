/*
name:manjit
roll:590041123
day:39 question:2
date:17-09-2026

Q78: Find the sum of main diagonal elements for a square matrix.
*/

#include <stdio.h>

int main()
{
    int r, c, a[100][100];
    int i, j, sum = 0;

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
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}
