//WAP to recursive reverse number//
#include<stdio.h>
int reverseNumber(int n, int rev)
{
    if (n == 0)
    {
        return rev;
    }
    rev = rev * 10 + n % 10;
    return reverseNumber(n / 10, rev);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = reverseNumber(num, 0);
    printf("Reversed number of %d is %d\n", num, reversed);
    return 0;
}