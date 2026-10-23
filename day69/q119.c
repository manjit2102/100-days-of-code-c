/*
name:manjit
roll:590041123
day:69 question:1
date:17-10-2026

Q119: Find the repeated element in one iteration.
*/

#include <stdio.h>

int main() {
    int nums[100], n;
    int seen[1000] = {0};
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);

        if (seen[nums[i]] == 1) {
            printf("%d", nums[i]);
            return 0;
        }

        seen[nums[i]] = 1;
    }

    return 0;
}
