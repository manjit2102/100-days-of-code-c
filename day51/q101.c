/*
name:manjit
roll:590041123
day:51 question:1
date:29-09-2026

Q101: Find the first and last occurrence of a target
in a sorted array.
*/

#include <stdio.h>

int main() {
    int n, nums[100], target;
    int first = -1, last = -1, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;

            last = i;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}
