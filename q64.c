/*
*name:manjit
*roll:590041123
*day:32 question:2
*date:10-09-2026
*
*problem statement:
*Find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>

int main()
{
    long long n;
    int count[10]={0};
    int digit, i, max=0, ans=0;

    scanf("%lld", &n);

    while(n>0)
    {
        digit=n%10;
        count[digit]++;
        n=n/10;
    }

    for(i=0; i<10; i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            ans=i;
        }
    }

    printf("%d", ans);

    return 0;
}
