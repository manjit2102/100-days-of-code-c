/*
*name:manjit
*roll:590041123
*day:34 question:2
*date:12-09-2026
*
*problem statement:
*Delete an element from an array.
*/

#include <stdio.h>

int main()
{
    int n, a[100], pos, i;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &pos);

    for(i=pos; i<n-1; i++)
    {
        a[i]=a[i+1];
    }

    n--;

    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
