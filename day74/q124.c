/*
name:manjit
roll:590041123
day:74 question:1
date:22-10-2026

Q124: Take two filenames from the user – a source file and a
destination file. Copy all the content from the source file to the
destination file using fgetc() and fputc().
*/

#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFile[100], destinationFile[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destinationFile);

    source = fopen(sourceFile, "r");

    if (source == NULL) {
        printf("Source file could not be opened.\n");
        return 1;
    }

    destination = fopen(destinationFile, "w");

    if (destination == NULL) {
        printf("Destination file could not be opened.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s\n", destinationFile);

    return 0;
}
