/*
*name:manjit
*roll:590041123
*day:31 question:1
*date:09-09-2026
*
*problem statement:
*Search for an element in an array using linear search.
*/

#include <stdio.h>

int main()
{
    int n, i, key, index=-1;
    int a[100];

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            index=i;
            break;
        }
    }

    if(index!=-1)
    {
        printf("Found at index %d", index);
    }
    else
    {
        printf("-1");
    }

    return 0;
}
