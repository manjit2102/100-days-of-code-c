/*
name:manjit
roll:590041123
day:94 question:1
date:11-11-2026

Q144: Write a function that accepts a structure as parameter
and prints its members.
*/

#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    int marks;
};

void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d",
           s.name, s.roll, s.marks);
}

int main() {
    struct Student s1 = {"Neha", 104, 92};

    display(s1);

    return 0;
}
