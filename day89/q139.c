/*
name:manjit
roll:590041123
day:89 question:1
date:06-11-2026

Q139: Show that enums store integers by printing assigned values.
*/

#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n",
           SUCCESS, FAILURE, TIMEOUT);

    return 0;
}
