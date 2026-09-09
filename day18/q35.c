/*
*name:manjit
*roll:590041123
*day:18 question:1
*date:27-08-2026
*
*problem statement:
*write a program to print all factors of a given number.
*/
#include <stdio.h>
int main()
{
int n, i;
printf("enter a number:");
scanf("%d", & n);
for(i=1; i<=n; i++)
{
if(n % i==0)
{
printf("%d",i);
}
}
return 0;
}
