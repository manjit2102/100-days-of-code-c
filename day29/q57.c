/*
*name:manjit
*roll:590041123
*day:29 question:1
*date:07-09-2026
*
*problem statement:
*find the sum of array elements.
*/

#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;

    printf("enter number of elements:");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("%d", sum);

    return 0;
}
