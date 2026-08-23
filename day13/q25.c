/*
*name:manjit
*roll:590041123
*day:13 question:1
*date:22-08-2026
*
*problem statement:
*write aprogame to implement a basic calculator using switch-case for +,-,*,/,%.
*/
#include<stdio.h>
int main()
{
int num1, num2;
char op;
scanf("%d %d %c", &num1, &num2, &op);
switch(op)
{
case '+':
printf("%d", num1 + num2);
break;
case'-':
printf("%d", num1 - num2);
break;
case'*':
printf("%d", num1 * num2);
break;
case'%':
printf("%d", num1 % num2);
break;
default:
printf("invalid operator");
}
return 0;
}
