/*
name:manjit
roll:590041123
day:55 question:1
date:03-10-2026

Q105: Find the majority element in an array.
*/

#include <stdio.h>

int main() {
    int n, nums[100], i, j, count;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count > n / 2) {
            printf("%d", nums[i]);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
