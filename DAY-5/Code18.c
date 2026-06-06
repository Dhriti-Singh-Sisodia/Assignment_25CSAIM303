//WAP to check strong number//
#include<stdio.h>
int main()
{
    int n,a,i,rem,fact,sum=0;
    printf("Enter the no = ");
    scanf("%d", &n);

    a = n;
    while(a>0)
    {
        rem = a%10;
        fact = 1; //initialize fact to 1 for each digit
        for(i=1;i<=rem;i++)
        {
            fact *= i;
        }
        sum += fact;
        a = a/10;
    }
    if(sum == n)
    printf("number is a strong no");
    else
    printf("number is not a strong no");
    return 0;
}