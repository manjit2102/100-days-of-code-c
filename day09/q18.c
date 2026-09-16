/*
*name:manjit
*roll:590041123
*day;9 question:2
*date:18-08-2006
*
*problem statement:
*write aprogram that accepts a percentage (0-100) and assign a grade based on following citeria: 90-100:grade A  80-89:grade B  70-79:grade C  60-69:grade D  below 60:grade F
*/
#include <stdio.h>
int main(void)
{
int percentage;
scanf("%d", & percentage);
if (percentage>=90 && percentage<=100)
{
printf("grade A\n");
}
else if(percentage>=80)
{
printf("grade B\n");
}
else if(percentage>=70)
{
printf("grade C\n");
}
else if(percentage>=60)
{
printf("grade D\n");
}
else
{
printf("grade F\n");
}
return 0;
}
