/*
*name:manjit
*roll:590041123
*day:14 question:2
*date:23-08-2026
*
*problem statement:
*write a programe to print the product of even numbers from 1 to n.
*/
#include <stdio.h>
int main()
{
int n, i, product=1;
scanf("%d", &n);
for(i=2; i<=n; i=i+2)
{
product=product*i;
}
printf("%d", product);
return 0;
}

