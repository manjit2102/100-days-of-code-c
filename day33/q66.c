/*
*name:manjit
*roll:590041123
*day:33 question:2
*date:11-09-2026
*
*problem statement:
*Insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>

int main()
{
    int n, a[100], element, i, pos;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &element);

    pos=n;

    for(i=0; i<n; i++)
    {
        if(element<a[i])
        {
            pos=i;
            break;
        }
    }

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
