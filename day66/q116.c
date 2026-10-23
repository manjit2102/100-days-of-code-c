/*
name:manjit
roll:590041123
day:66 question:1
date:14-10-2026

Q116: Find two indices whose elements sum to target.
*/

#include <stdio.h>

int main() {
    int nums[100], n, target;
    int i, j;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1");

    return 0;
}
