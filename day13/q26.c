/*
*name:manjit
*roll:590041123
*day:13 question:2
*date:22-08-2026
*
*problem statement:
* write a programe to print numbers from 1 to n.
*/
#include <stdio.h>
int main()
{
int n,i;
scanf("%d", & n);
for (i=1; i<=n; i++)
{
printf("%d", i);
if(i<n)
{
printf(" ");
}
}
return 0;
}
