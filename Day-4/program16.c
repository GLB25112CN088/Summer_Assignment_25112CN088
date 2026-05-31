#include<stdio.h>
int main(){
    int i ,n,sum,d;
    for(i=100;i<=999;i++)
    {
        n=i;
        sum=0;
        while(n>0)
        {
            d= n%10;
            sum= sum+d*d*d;
            n= n/10;
        }
        if (sum==i)
        printf("%d",i);
    }
    return 0;

}