/*
name:manjit
roll:590041123
day:77 question:1
date:25-10-2026

Q127: Read text from input.txt, convert all lowercase
letters to uppercase, and write the result to output.txt.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    char ch;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if (input == NULL) {
        printf("Error: input.txt does not exist!\n");
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {
        ch = toupper(ch);
        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("Text converted to uppercase successfully!\n");

    return 0;
}
