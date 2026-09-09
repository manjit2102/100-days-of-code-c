/*
*name:manjit
*roll:590041123
*day:29 question:2
*date:07-09-2026
*
*problem statement:
*find the maximum and minimum element in an array.
*/

#include <stdio.h>

int main()
{
    int a[100], n, i, max, min;

    printf("enter number of elements:");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Max=%d, Min=%d", max, min);

    return 0;
}
