/*
*name:manjit
*roll:590041123
*day:16 question:1
*date:25-08-2026
*
*problem statement:
*write a program to take a number as input and print its equivalent binary representation.
*/
#include <stdio.h>
int main()
{
int num, binary[32], i=0;
//input
printf("enter a number:");
scanf("%d", & num);
//special case for 0
if(num==0)
{
printf("binary equivalent: 0\n");
return 0;
}
// convert decimal to binary
while (num>0)
{
binary[i]=num%2;
num=num/2;
i++;
}
//print binary in reverse order
printf("binary equivalent:");
for(int j=i-1; j>=0; j--)
{
printf("%d", binary[j]);
}
printf("\n");
return 0;
}
