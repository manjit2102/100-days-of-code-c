/*
*name:manjit
*roll:590041123
*day:8 question:2
*date:17-08-2006
*
*problem statement:
*write a program to input three numbers and find the largest among them usin if-else.
*/
#include <stdio.h>
int main(void)
{
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
if (a>=b && a>=c)
{
printf("largest is %d", a);
}
else if (b>=a && b>=c)
{
printf("largest is %d", b);
}
else
{
printf("laegest is %d", c);
}
return 0;
}
