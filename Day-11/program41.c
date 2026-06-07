#include<stdio.h>
int sum(int a , int b)
{
    return a+b;
}
int main()
{
    int x,y;
    printf("enter two numbers:");
    scanf("%d%d",&x,&y);
    printf("sum=%d",sum(x,y));
    return 0;
}
