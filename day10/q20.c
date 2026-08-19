/*
*name:manjit
*roll:590041123
*day:10 question:2
*date:19-08-2026
*
*problem statement:
*write a programe to display the day of the week based on a number(1-7) using switch-case.
*/
#include <stdio.h>
int main()
{
int day;
scanf("%d", & day);
switch (day)
{
case 1:
printf("monday");
break;
case 2:
printf("tuesday");
break;
case 3:
printf("wednesday");
break;
case 4:
printf("thursday");
break;
case 5:
printf("friday");
break;
case 6:
printf("saturday");
break;
case 7:
printf("sunday");
break;
dafault:
printf("invalid");
}
return 0;
}
