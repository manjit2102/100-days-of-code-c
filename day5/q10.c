/*
*name:manjit
*roll:590041123
*day:05 question:2
*date:14-08-2006
*
*problem statement:
*write a programme to input time in seconds and convert it to hours:minutes:seconds format.
*/
#include <stdio.h>
int main(void)
{
int seconds, hours, minutes;
scanf("%d", &seconds);
hours = seconds/3600;
minutes = (seconds % 3600)/ 60;
seconds = seconds % 60;
printf("%d:%d:%d", hours, minutes, seconds);
return 0;
}
