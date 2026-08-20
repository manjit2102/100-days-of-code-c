/*
*name:manjit
*roll:590041123
*day:11 question:1
*date:20-08-2026
*
*problem statement:
*write a programe to display the month name and number of days using switch-case for a given month number.
*/
#include <stdio.h>
int main()
{
int month;
scanf("%d", & month);
switch(month)
{
case 1:
printf("janauary, 31 days");
break;
case 2:
printf("february, 28 days");
break;
case 3:
printf("march, 31 days");
break;
case 4:
printf("april, 30 days");
break;
case 5:
printf("may, 31 days");
break;
case 6:
printf("june, 30 days");
break;
case 7:
printf("july, 31 days");
break;
case 8:
printf("august, 31 days");
break;
case 9:
printf("september, 30 days");
break;
case 10:
printf("october, 31 days");
break;
case 11:
printf("november, 30 days");
break;
case 12:
printf("december, 31 days");
break;
defaylt:
printf("invalid month number");
}
return 0;
}
