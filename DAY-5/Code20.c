//WAP to find largest prime number//
#include<stdio.h>
int main()
{
    int n,i,j,prime=1,num,largest=0;
    printf("enter the term = ");
    scanf("%d", &n); //number of terms

    for(i=1; i<=n ; i++)
    {
        scanf("%d", &num); //input terms digit
        prime = 1; //initialize prime to 1 for each number

        if(num < 2)
        prime = 0;
        else
        {
            for(j=2; j<num; j++)
            {
                if(num%j == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }
        if(prime == 1 && num > largest)
        largest = num; //update largest if current prime is greater
    }
    if(largest > 0)
    printf("largest prime number is %d", largest);
    else
    printf("no prime number found");
    return 0;
}