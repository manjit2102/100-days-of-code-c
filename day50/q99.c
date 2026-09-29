/*
name:manjit
roll:590041123
day:50 question:1
date:28-09-2026

Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/

#include <stdio.h>

int main() {
    int day, month, year;

    scanf("%d/%d/%d", &day, &month, &year);

    char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("%02d-%s-%d", day, months[month], year);

    return 0;
}
