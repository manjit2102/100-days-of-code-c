/*
name:manjit
roll:590041123
day:55 question:1
date:04-10-2026

Q106: Find the next greater element for each element
of the array using brute force approach.
*/

#include <stdio.h>

int main() {
    int n, arr[100], i, j;
    int nextGreater;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        nextGreater = -1;

        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }

        printf("%d", nextGreater);

        if (i < n - 1) {
            printf(", ");
        }
    }

    return 0;
}
