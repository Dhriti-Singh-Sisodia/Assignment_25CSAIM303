//WAP to convert binary to decimal//
#include<stdio.h>
#include<math.h>
int main()
{
    int n, decimalno = 0, i = 0, rem;
    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n > 0) 
    {
        rem = n % 10;
        decimalno += rem * pow(2, i);
        n = n / 10;
        i++;
    }
    printf("Decimal representation: %d\n", decimalno);
    return 0;
}