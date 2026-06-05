//WAP to print prime number in a range//
#include<stdio.h>
int main()
{
    int start, end, i, j, prime;
    printf("enter the starting digit = ");
    scanf("%d", &start);
    printf("enter the ending digit = ");
    scanf("%d", &end);

    for(i=start; i<=end; i++)
    {
        if(i<2)
        continue;
        prime = 1;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                prime = 0;
                break;
            }
        }
        if(prime == 1)
        printf("%d\n", i);
    }
    return 0;
}