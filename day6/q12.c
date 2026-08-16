/*
*name:manjit
*roll:590041123
*day:06 question:2
*date 15-08-2026
*
*problem statement:
*write a program to input an integer and check whether it is positive, negative or zero using nested if-else.
*/
#include <stdio.h>
int main(void)
{
int num;
scanf("%d", &num);
if (num>=0)
if (num==0)
{
printf("zero");
}
else
{
printf("positive");
}
else
{
printf("negative");
}
return 0;
}

