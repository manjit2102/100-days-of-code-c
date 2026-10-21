/*
name:manjit
roll:590041123
day:59 question:1
date:07-10-2026

Q109: Write a program to take an integer array arr and an integer k
as inputs. Print the maximum sum of all the subarrays of size k.
*/

#include <stdio.h>

int main() {
    int n, arr[100], k, i;
    int sum = 0, maxSum;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (i = 0; i < k; i++) {
        sum = sum + arr[i];
    }

    maxSum = sum;

    for (i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}
