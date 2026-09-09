/*
*name:manjit
*roll:590041123
*day:30 question:1
*date:08-09-2026
*
*problem statement:
*Count even and odd numbers in an array.
*/

#include <stdio.h>

int main()
{
    int n, i, even=0, odd=0;
    int a[100];

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even=%d, Odd=%d", even, odd);

    return 0;
}
