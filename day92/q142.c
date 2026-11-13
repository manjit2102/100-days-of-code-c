/*
name:manjit
roll:590041123
day:92 question:1
date:09-11-2026

Q142: Store details of 5 students in an array of structures
and print all.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter Name, Roll and Marks: ");
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    printf("\nName\tRoll\tMarks\n");

    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
