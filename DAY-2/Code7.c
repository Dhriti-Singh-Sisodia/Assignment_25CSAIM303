//WAP to find the product of a given no//
#include<stdio.h>
int main()
{
    int n, product=1, rem;
    printf("enter the number = ");
    scanf("%d", &n);

    if(n==0)
    {
        product = 0;
    }
    else{
        while(n!=0)
        {
            rem = n%10;
            product = product * rem;
            n = n/10;
        }
    }
    printf("product of the given number = %d", product);
    return 0;
}