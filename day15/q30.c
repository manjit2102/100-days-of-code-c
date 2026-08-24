/*
*name:manjit
*roll:590041123
*day:15 question:2
*date:24-08-2026
*
*problem statement:
*write a programe to reverse a numbe.
*/
#include <stdio.h>
int main()
{
int n, reverse=0, digit;
scanf("%d", & n);
while(n!=0)
{
digit=n%10;
reverse=reverse*10+digit;
n=n/10;
}

printf("%d", reverse);
return 0;
}

