//WAP  to convert decimal to binary//
#include<stdio.h>
int main()
{
   int n, binaryno[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) 
    {
        binaryno[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary representation: ");

    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%d", binaryno[j]);
    }
    printf("\n");
    return 0;
}