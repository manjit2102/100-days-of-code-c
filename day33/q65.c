/*
*name:manjit
*roll:590041123
*day:33 question:1
*date:11-09-2026
*
*problem statement:
*Search in a sorted array using binary search.
*/

#include <stdio.h>

int main()
{
    int n, a[100], key;
    int low, high, mid, index=-1, i;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==key)
        {
            index=mid;
            break;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    if(index!=-1)
        printf("Found at index %d", index);
    else
        printf("-1");

    return 0;
}
