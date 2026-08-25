/*
*name:manjit
*roll:590041123
*day:16 question:2
*date:25-08-2026
*
*problem statement:
*write a programe to check if a number is palindrome.
*/
#include <stdio.h>
int main()
{
int num, originalnum, reverse=0, remainder;
//input
printf("enter a number:");
scanf("%d", & num);
originalnum=num;
//reverse the number
while(num != 0)
{
remainder=num%10;
reverse=reverse*10+remainder;
num=num/10;
}
//check palindrome
if(originalnum == reverse)
{
printf("palindrome\n");
}
else
{
printf("not palindrome\n");
}
return 0;
}
