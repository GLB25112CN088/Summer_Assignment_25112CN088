#include<stdio.h>
int armstrong(int n)
{
    int temp=n,sum=0,digit;

    while(temp>0)
    {
        digit=temp%10;
        sum=sum+digit*digit*digit;
        temp=temp/10;
    }
    return (sum==n);
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d,&n");

    if(armstrong(n))
    printf("armstrong number:");
    else
    printf("not armstrong number");

    return 0;
}