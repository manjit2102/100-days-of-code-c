/*
*name:manjit
*roll:590041123
*day:11 question:1
*date:21-08-2026
*
*problem statement:
*write a programe to calculate library finebased on late days as follows: first 5 days late:rs2/day next 5 days late:rs4/day next 20 days late:rs6/day more than 30 days:membership cancelled
*/
#include <stdio.h>
int main()
{
int days, fine;
scanf("%d", & days);
if(days>30)
{
printf("membership cancelled");
}
else if(days<=5)
{
fine=days*2;
printf("fine rs %d", fine);
}
else if(days<=10)
{
fine=(5*2)+((days-5)*4);
printf("fine rs %d", fine);
}
else
{
fine=(5*2)+(5*4)+((days-10)*6);
printf("fine rs %d", fine);
}
return 0;
}

