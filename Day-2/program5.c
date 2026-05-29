#include<stdio.h>
int main(){
    int n,d,s=0; //n=number,d=digit,s=sum
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    printf("the sum of digits is = %d",s);
    return 0;
}