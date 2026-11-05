/*
name:manjit
roll:590041123
day:84 question:134
date:01-10-2026

Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT,
and print messages accordingly.
*/

#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status status;
    char input[20];

    scanf("%s", input);

    if (strcmp(input, "SUCCESS") == 0)
        status = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0)
        status = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0)
        status = TIMEOUT;
    else
        return 0;

    switch (status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;

        case FAILURE:
            printf("Operation failed\n");
            break;

        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }

    return 0;
}
