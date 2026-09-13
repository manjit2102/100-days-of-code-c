/*
*name:manjit
*roll:590041123
*day:35 question:1
*date:13-09-2026
*
*problem statement:
*Find the second largest element in an array.
*/

#include <stdio.h>

int main()
{
    int n, a[100], i;
    int largest, second;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest=a[0];
    second=a[0];

    for(i=0; i<n; i++)
    {
        if(a[i]>largest)
        {
            second=largest;
            largest=a[i];
        }
        else if(a[i]>second && a[i]!=largest)
        {
            second=a[i];
        }
    }

    printf("%d", second);

    return 0;
}
