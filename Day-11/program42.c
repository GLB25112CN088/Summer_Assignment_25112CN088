#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
    return a;
    else 
    return b;
}
int main()
{
    int x,y;
    printf("enter two numbers:");
    scanf("%d%d",&x,&y);
    printf("maximum=%d",max(x,y));
    return 0;
}