/*
*name:manjit
*roll:590041123
*day:17 question:1
*date:26-08-2026
*
*problem statement:
*write a programe to check if a number is an armstrong number.
*/
#include <stdio.h>
int main()
{
int num, original, remainder, sum=0;
printf("enter a number:");
scanf("%d", & num);
original=num;
while(num != 0)
{
remainder=num%10;
sum=sum+(remainder*remainder*remainder);
num=num/10;
}
if(sum==original)
{
printf("armstrong");
}
else
{
printf("not armstrong");
}
return 0;
}
