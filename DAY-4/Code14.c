//WAP to find nth term of Fibonacci series.//
#include<stdio.h>
int main()
{
    int n,i,f1=0,f2=1,f3;
    printf("Enter the term number n you want to find: ");
    scanf("%d",&n);
    if(n==1)
    printf("the fibonacci term is = %d", f1);
    else if(n==2)
    printf("the fibonacci term is = %d", f2);
    else
    {
        for(i=3;i<=n;i++)
        {
            f3=f1+f2;
            f1=f2;
            f2=f3;
        }
        printf("the fibonacci term is = %d", f3);
    }
    return 0;
}