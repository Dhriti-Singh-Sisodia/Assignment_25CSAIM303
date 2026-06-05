//WAP to program to generate Fibonacci series up to n terms.//
#include <stdio.h>
int main()
{
    int n,i,f1=0,f2=1,f3;
    printf("Enter the number of terms n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\n", f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }    
    return 0;
}