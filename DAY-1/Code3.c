//WAP to find factorial of a given number//
#include<stdio.h>
int main()
{
    int n, i, fact=1;
    printf("enter the value of n = ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("error! factorial of negative no doesn't exist.");
    }
    else{
    for(i=1; i<=n; i++)
    {
        fact *= i; //fact = fact * i//
    }
    printf("factorial of no n = %d", fact);
}
return 0;
}