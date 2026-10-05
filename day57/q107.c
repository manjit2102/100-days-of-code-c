/*
name:manjit
roll:590041123
day:57 question:1
date:05-10-2026

Q107: Find the previous greater element for each element
of an array using brute force.
*/

#include <stdio.h>

int main() {
    int n, arr[100];
    int i, j, greater;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        greater = -1;

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                greater = arr[j];
                break;
            }
        }

        printf("%d", greater);

        if (i < n - 1) {
            printf(", ");
        }
    }

    return 0;
}
