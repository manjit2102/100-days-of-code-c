/*
name:manjit
roll:590041123
day:61 question:1
date:09-10-2026

Q111: Write a program to take an integer array arr and an integer k
as inputs. Find the first negative integer in each subarray of size k.
If no negative exists in a window, print 0.
*/

#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j;
    int found;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for(i = 0; i <= n - k; i++)
    {
        found = 0;

        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            printf("0");
        }

        if(i < n - k)
        {
            printf(" ");
        }
    }

    return 0;
}
