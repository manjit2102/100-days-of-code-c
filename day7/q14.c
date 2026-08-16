/*
*name:manjit
*roll:590041123
*day:7 question:2
*date:16-08-2026
*
*problem statement:
*write a program to input a character and check whether it is a vowel or consonant using if-else.
*/
#include <stdio.h>
int main(void)
{
char ch;
scanf("%c", &ch);
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
{
printf("vowel");
}
else
{
printf("consonant");
}
return 0;
} 
