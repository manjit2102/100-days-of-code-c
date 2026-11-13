/*
name:manjit
roll:590041123
day:88 question:1
date:05-11-2026

Q138: Print all enum names and integer values using a loop.
*/

#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char *names[] = {"RED", "YELLOW", "GREEN"};

    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}
