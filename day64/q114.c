/*
name:manjit
roll:590041123
day:64 question:1
date:12-10-2026

Q114: Find the length of the longest substring
without repeating characters.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int last[256];
    int i, start = 0, maxLen = 0;

    scanf("%s", s);

    for (i = 0; i < 256; i++) {
        last[i] = -1;
    }

    for (i = 0; s[i] != '\0'; i++) {
        if (last[(unsigned char)s[i]] >= start) {
            start = last[(unsigned char)s[i]] + 1;
        }

        last[(unsigned char)s[i]] = i;

        if (i - start + 1 > maxLen) {
            maxLen = i - start + 1;
        }
    }

    printf("%d", maxLen);

    return 0;
}
