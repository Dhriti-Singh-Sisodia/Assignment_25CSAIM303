//WAP to print multiplication table of a given number//
#include<stdio.h>
int main()
{
    int n,i,mul;
    printf("enter the number n for which you need a multiplication table = ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        mul = n * i;
        printf("%d * %d = %d\n",n, i, mul);
    }
    return 0;

}