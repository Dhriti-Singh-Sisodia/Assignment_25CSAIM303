//WAP to find the sum and average of first n natural numbers//
#include<stdio.h>
int main()
{
    int n, i, sum=0, avg;
    printf("enter the value of number n = ");
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    {
        sum = sum + i;
        avg = sum/2;
    }
    printf("sum of first n natural no = %d\n", sum);
    printf("avg of no = %d", avg);
    return 0;
}