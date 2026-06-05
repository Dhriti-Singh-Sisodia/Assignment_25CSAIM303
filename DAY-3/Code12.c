//WAP to find the LCM of two no//
#include<stdio.h>
int main()
{
    int a,b,LCM;
    printf("enter the value of a and b = ");
    scanf("%d%d", &a,&b);

    LCM = (a>b)?a:b;
    while(1)
    {
        if(LCM%a==0 && LCM%b==0)
        {
            printf("LCM = %d", LCM);
            break;
        }
        LCM++;
    }
    return 0;
}