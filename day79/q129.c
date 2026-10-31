/*
name:manjit
roll:590041123
day:79 question:1
date:27-10-2026

Q129: Read integers from numbers.txt and
calculate their sum and average.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error: numbers.txt does not exist!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum = sum + num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }

    return 0;
}
