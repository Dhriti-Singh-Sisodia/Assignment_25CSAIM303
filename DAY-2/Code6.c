//WAP to reverse a number//
#include<stdio.h>
int main()
{
    int n, rev=0, rem;
    printf("enter the number = ");
    scanf("%d", &n);

    while(n!=0)
    {
        rem = n%10; //get last digit//
        rev = rev * 10 + rem; //reverse the no//
        n = n/10; //remove last digit//
    }
    printf("reverse of the number = %d", rev);
    return 0;
}