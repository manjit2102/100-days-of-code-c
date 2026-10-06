/*
name:manjit
roll:590041123
day:58 question:1
date:06-10-2026

Q108: Print an array answer such that answer[i] is equal to
the product of all the elements of nums except nums[i].
*/

#include <stdio.h>

int main() {
    int n, nums[100], answer[100];
    int i, j;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        answer[i] = 1;

        for (j = 0; j < n; j++) {
            if (i != j) {
                answer[i] = answer[i] * nums[j];
            }
        }
    }

    printf("[");

    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);

        if (i < n - 1) {
            printf(",");
        }
    }

    printf("]");

    return 0;
}
