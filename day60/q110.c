/*
name:manjit
roll:590041123
day:60 question:1
date:08-10-2026

Q110: Write a program to take an integer array arr and an integer k
as inputs. The task is to find the maximum element in each subarray
of size k moving from left to right. Print the maximum elements for
each window separated by spaces as output.
*/

#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, max;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for(i = 0; i <= n - k; i++)
    {
        max = arr[i];

        for(j = i; j < i + k; j++)
        {
            if(arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d", max);

        if(i < n - k)
        {
            printf(" ");
        }
    }

    return 0;
}
