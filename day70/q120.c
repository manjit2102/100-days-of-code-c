/*
name:manjit
roll:590041123
day:70 question:1
date:18-10-2026

Q120: Change the given string to sentence case.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;

    fgets(str, sizeof(str), stdin);

    if (str[0] != '\0') {
        str[0] = toupper(str[0]);
    }

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }

    printf("%s", str);

    return 0;
}
