//WAP to find GCD of two number//
#include<stdio.h>
int main()
{
    int a,b,rem;
    printf("enter a = ");
    scanf("%d", &a);
    printf("enter b = ");
    scanf("%d", &b);

    while(b != 0)
    {
        rem = b; //store value of b
        b = a%b; //store reminder value in b
        a = rem; //move value of b in a
    }
    printf("GCD of a and b = %d", a);
    return 0;
}