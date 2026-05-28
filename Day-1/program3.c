#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("enter the number");
    scanf("%d",&n);
    if(n<0)
    printf("factorial is not defined");
    else if ((n==0)||(n==1))
    printf("factorial is 1");
    else{
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("the factorial is=%d",fact);
    }
    return 0;
}