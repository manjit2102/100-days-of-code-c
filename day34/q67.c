/*
*name:manjit
*roll:590041123
*day:34 question:1
*date:12-09-2026
*
*problem statement:
*Insert an element in an array at a given position.
*/

#include <stdio.h>

int main()
{
    int n, a[100], pos, element, i;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &pos, &element);

    for(i=n; i>pos; i--)
    {
        a[i]=a[i-1];
    }

    a[pos]=element;
    n++;

    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
