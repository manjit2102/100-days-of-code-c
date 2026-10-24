/*
/*
name:manjit
roll:590041123
day:72 question:1
date:20-10-2026

Q122: Write a C program that opens an existing file (e.g., info.txt)
and reads its contents using fgets(). The program should print all
the lines to the console until EOF (end of file) is reached.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char line[100];

    /* Creating info.txt with sample data */
    fp = fopen("info.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be created.\n");
        return 1;
    }

    fprintf(fp, "Name: Rahul\n");
    fprintf(fp, "Age: 23\n");

    fclose(fp);

    /* Opening the file in read mode */
    fp = fopen("info.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    /* Reading file until EOF */
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
