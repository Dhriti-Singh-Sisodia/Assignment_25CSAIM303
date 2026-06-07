//WAP to find x^n without pow()//
#include<stdio.h>
int main()
{
    int x, n, i, result = 1;
    printf("Enter base x: ");
    scanf("%d", &x);
    printf("Enter exponent n: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        result *= x;
    }
    printf("%d^%d = %d\n", x, n, result);
    return 0;
}