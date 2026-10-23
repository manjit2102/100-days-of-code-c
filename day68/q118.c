/*
name:manjit
roll:590041123
day:68 question:1
date:16-10-2026

Q118: Find the missing number in the array.
*/

#include <stdio.h>

int main() {
    int nums[100], n;
    int i, sum = 0, total;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum = sum + nums[i];
    }

    total = n * (n + 1) / 2;

    printf("%d", total - sum);

    return 0;
}
