#include<stdio.h>
int main(){
    int binary,rem,base=1,decimal=0;
    printf("enter binary number:");
    scanf("%d",&binary);

    while(binary>0){
        rem = binary%10;
        decimal = decimal + rem*base;
        base = base*2;
        binary = binary/10;
    }
    printf("Decimal=%d",decimal);
    return 0;
}