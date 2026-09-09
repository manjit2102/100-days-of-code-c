/*
*name:manjit
*roll:590041123
*day:18 question:2_
*date:27-08-2026
*
*problem statement:
*write a program to find the HCF (GCD) of two numbers.
*/

#include <stdio.h>

int main()
{
    int a, b, i, hcf;

    printf("enter two numbers:");
    scanf("%d %d", &a, &b);

    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    printf("%d", hcf);

    return 0;
}
