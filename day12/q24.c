/*
*name:manjit
*roll:590041123
*day:12 question:2
*date:21-08-2026
*
*problem statement:
*write a programe to calculate electricity bill based on unts consumed with these rates: first 100 units at rs5/unit next 100 unit at 7/unit next 100 unit as rs10/unit above at rs12/unit
*/
#include <stdio.h>
int main()
{
int units, bill;
scanf("%d", & units);
if(units<=100)
{
bill=units*5;
}
else if(units<=200)
{
bill=(100*5)+((units-100)*7);
}
else if(units<=300)
{
bill=(100*5)+(100*7)+((units-200)*10);
}
else
{
bill=(100*5)+(100*7)+(100*10)+((units-300)*12);
}
printf("bill: rs%d", bill);
return 0;
}
