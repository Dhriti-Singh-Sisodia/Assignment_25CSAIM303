//WAP to find the sum of a digit of a number//
#include<stdio.h>
int main()
{
    int n,sum=0,rem=0;
    printf("enter the number n = ");
    scanf("%d", &n);

    if(n==0)
    {
        sum = 0;
    }
    else{
        while(n!=0)
        {
            rem = n%10;
            n = n/10;
            sum += rem;
        }
    }
    printf("sum of digit of a number = %d", sum);
    return 0;
}