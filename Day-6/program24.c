#include<stdio.h>
int main(){
    int n,x,result=1;
    printf("enter base and power:");
    scanf("%d%d",&x,&n);
    for(int i=1;i<=n;i++){
        result = result*x;
    }
    printf("%d^%d = %d",x,n,result);
    return 0;
}