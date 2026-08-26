/*
*name:manjit
*roll:590041123
*day:17 question:2
*date:26-08-2026
*
*problem statement:
*write a program to check if a number is prime.
*/
#include <stdio.h>
int main()
{
int num, i, count=0;
printf("enter a number:");
scanf("%d", & num);
for(i=1; i<=num; i++)
{
if(num % i==0)
{
count++;
}
}
if(count==2)
{
printf("prime");
}
else
{
printf("not prime");
}
return 0;
}
