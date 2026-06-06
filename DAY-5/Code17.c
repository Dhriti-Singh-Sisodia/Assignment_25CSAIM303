//WAP to program to check perfect number//
#include<stdio.h>
int main()
{
    int n,i,num=0;
    printf("enter the number = ");
    scanf("%d", &n);

    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            num = num + i;
        }
    }
    if(num == n)
    {
        printf("number is perfect");
    }
    else
    printf("number is not perfect");
    return 0;
}