/*
*name:manjit
*roll:590041123
*day:05 question:1
*date:14-08-2026
*
*problem statement:
* <write a programme to calculate simple and compound interest for given principal, rate and time>
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
double principal, rate, time;
double simpleinterest, compoundinterest;
scanf("%lf %lf %lf", &principal, &rate, &time);
simpleinterest = (principal * rate * time) /100;
compoundinterest = principal * pow((1 + rate / 100), time) - principal;
printf("simple interest=%.0f, compound interest=%.2f", simpleinterest, compoundinterest);
return 0;
}
