/*
name:manjit
roll:590041123
day:52 question:1
date:30-09-2026

Q102: Find the index of the smallest element greater
than or equal to x (ceil of x) in a sorted array.
*/

#include <stdio.h>

int main() {
    int n, arr[100], x;
    int index = -1, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}
