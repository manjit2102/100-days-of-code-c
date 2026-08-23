/*
*name:manjit
*roll:590041123
*day:14 question:1 
*date:23-08-2026
*
*problem statement:
*write a programe to print the sum of the first n odd numbers.
*/
#include <stdio.h>
int main()
{
int n, i, sum=0;
scanf("%d", & n);
for(i=1; i<=n; i++)
{
sum = sum + (2*i-1);
}
printf("%d", sum);
return 0;
}
