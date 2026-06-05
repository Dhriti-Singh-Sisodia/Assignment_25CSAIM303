//WAP to check armstrong number for three digits//
#include<stdio.h>
int main()
{
    int n,a,rem,sum=0;
    printf("enter the no = ");
    scanf("%d",&n);

    a = n;
    while(a!=0)
    {
        rem = a%10;
        sum = sum + (rem*rem*rem); //no of multiplication of reminder's depends on the number of digits in the number.//
        a = a/10;
    }
    if(sum == n)
    printf("no is armstrong");
    else
    printf("no is not armstrong");
    return 0;
}