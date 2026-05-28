#include<stdio.h>
int main(){
    int i,N,sum=0;
    printf("enter a number:");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        sum=sum+i;
    }
    printf("sum of first %d natural numbers is=%d ",N,sum);
    return 0;
    
}