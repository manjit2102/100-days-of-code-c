/*
name:manjit
roll:590041123
day:52 question:1
date:30-09-2026

Q103: Find the leftmost pivot index of an array.
*/

#include <stdio.h>

int main() {
    int n, nums[100];
    int i, total = 0, leftSum = 0, index = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        total = total + nums[i];
    }

    for (i = 0; i < n; i++) {
        if (leftSum == total - leftSum - nums[i]) {
            index = i;
            break;
        }

        leftSum = leftSum + nums[i];
    }

    printf("%d", index);

    return 0;
}
