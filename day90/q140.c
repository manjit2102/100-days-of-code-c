/*
name:manjit
roll:590041123
day:90 question:1
date:07-11-2026

Q140: Define a struct with enum Gender and print person's gender.
*/

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char input[20];

    scanf("Gender=%s", input);

    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else
        p.gender = FEMALE;

    if (p.gender == MALE)
        printf("Male\n");
    else
        printf("Female\n");

    return 0;
}
