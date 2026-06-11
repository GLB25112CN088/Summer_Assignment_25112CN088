#include<stdio.h>
int main()
{
    int a[100],n,i,temp;
    printf("enter size of array:");
    scanf("%d",&n);

    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    temp = a[n-1];
    for(i=n-1;i>0;i--)
    {
        a[i] = a[i-1];
    }
    a[0]=temp;
    printf("array after right rotaion:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}