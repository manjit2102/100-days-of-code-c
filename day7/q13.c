/*
*name:manjit
*roll:590041123
*day:7 question:1
*date:16-08-2006
*
*problem statement:
*write a program to input a year and check whether it is a leap year or not using conditional statement.
*/
#include <stdio.h>
int main(void)
{
int year;
scanf("%d", &year);
if (year % 400==0)
{
printf("leap year");
}
else if (year % 100==0)
{
printf("not a leap year");
}
else if (year % 4==0)
{
printf("leap year");
}
else
{
printf("not a leap year");
}
return 0;
}
