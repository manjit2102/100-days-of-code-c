/*
*name:manjit
*roll:590041123
*day:10 question:1
*date:19-08-2026
*
*problem statement:
*write a programe to classify a triangle as equilaterial, isosceles, or scalene based on its side lengths.
*/
#include <stdio.h>
int main()
{
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
if(a==b && b==c)
{
printf("equilateral");
}

else if(a==b || b==c || a==c)
{
printf("isosceles");
}
else
{
printf("scalene");
}
return 0;
}
