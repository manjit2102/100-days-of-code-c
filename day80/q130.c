/*
name:manjit
roll:590041123
day:80 question:1
date:28-10-2026

Q130: Store multiple student records (name, roll number, marks)
into a file using fprintf(). Then read them using fscanf()
and display each record.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks, n, i;

    fp = fopen("students.txt", "w");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}
