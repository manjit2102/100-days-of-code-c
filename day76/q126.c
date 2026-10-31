/*
name:manjit
roll:590041123
day:76 question:1
date:24-10-2026

Q126: Check if a file exists and display its content.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist!\n");
    }
    else {
        printf("File opened successfully.\n");

        while ((ch = fgetc(fp)) != EOF) {
            printf("%c", ch);
        }

        fclose(fp);
    }

    return 0;
}
