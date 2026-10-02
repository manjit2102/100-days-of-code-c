/*
name:manjit
roll:590041123
day:54 question:1
date:02-10-2026

Q104: Write a Program to take a positive integer n as input,
and find the pivot integer x such that the sum of all elements
between 1 and x inclusively equals the sum of all elements
between x and n inclusively.
*/

#include <stdio.h>

int main() {
    int n, x, i;
    int leftSum, rightSum, pivot = -1;

    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        leftSum = 0;
        rightSum = 0;

        for (i = 1; i <= x; i++) {
            leftSum = leftSum + i;
        }

        for (i = x; i <= n; i++) {
            rightSum = rightSum + i;
        }

        if (leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}
