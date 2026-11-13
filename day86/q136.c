/*
name:manjit
roll:590041123
day:86 question:1
date:03-11-2026

Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY)
and perform operations using switch.
*/

#include <stdio.h>
#include <string.h>

enum Menu {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char choice[20];
    int a, b;
    enum Menu operation;

    scanf("%s %d %d", choice, &a, &b);

    if (strcmp(choice, "ADD") == 0)
        operation = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0)
        operation = SUBTRACT;
    else
        operation = MULTIPLY;

    switch (operation) {
        case ADD:
            printf("%d\n", a + b);
            break;

        case SUBTRACT:
            printf("%d\n", a - b);
            break;

        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
