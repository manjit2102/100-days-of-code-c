/*
name:manjit
roll:590041123
day:49 question:1
date:27-09-2026

Q97: Print the initials of a name.
*/

#include <stdio.h>

int main() {
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    printf("%c.", name[0]);

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c.", name[i + 1]);
        }
    }

    return 0;
}
