//WAP to check whether a number is prime or not//
#include<stdio.h>
int main()
{
    int n, i, prime = 1;
    printf("enter the value of number = ");
    scanf("%d", &n);

    if(n <= 1)
    {
        prime = 0;
    }
    else{
        for(i=2 ; i<n; i++)
        {
            if(n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    if(prime == 1)
        printf("prime no");
    else
        printf("not a prime no");
    return 0;
}
