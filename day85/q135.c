/*
name:manjit
roll:590041123
day:85 question:1
date:02-11-2026

Q135: Assign explicit values starting from 10 and print them.
*/

#include <stdio.h>

enum values {
    A = 10,
    B,
    C
};

int main() {
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}
