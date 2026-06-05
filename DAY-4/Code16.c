//WAP to print armstrong number in a range 1 to 1000//
#include<stdio.h>
int main()
{
    int start,end,n,i,rem,sum=0;
    printf("enter the starting number = ");
    scanf("%d",&start);
    printf("enter the ending number = ");
    scanf("%d",&end);
    for(i=start; i<=end; i++)
    {
        n = i;
        sum = 0;
        while(n!=0)
        {
            rem = n%10;
            sum = sum + (rem*rem*rem);
            n = n/10;
        }
        if(sum == i)
        printf("%d\n", i);
    }
    return 0;
}