//WAP to check whether a number is palindrome//
#include<stdio.h>
int main()
{
    int n, rev=0, rem, original;
    printf("enter the value number n = ");
    scanf("%d", &n);
    original = n;

    while(n!=0)
    {
        rem = n%10;
        rev = rev * 10 + rem;
        n = n/10;
    }
    if(original == rev)
    printf("number is a palindrome");
    else
    printf("number is not a palindrome");
    return 0;
}