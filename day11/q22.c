/*
*name:manjit
*roll:590041123
*day:11 question:2
*date:20-08-2026
*
*problem statement:
*write a programe to find profit or loss percentage given cost price and selling price.
*/
#include <stdio.h>
int main()
{
float cp, sp, percentage;
scanf("%f %f", &cp, &sp);
if(sp>cp)
{
percentage = ((sp-cp)/cp)*100;
printf("profit %.0f%%", percentage);
}
else if(sp<cp)
{
percentage = ((cp-sp)/cp)*100;
printf("loss %.0f%%", percentage);
}
else
{
printf("no profit no less");
}
return  0;
}


