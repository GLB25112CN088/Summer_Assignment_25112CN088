#include<stdio.h>
int main()
{
    int a[10],n,i,sum=0;
    float avg;
    printf("enter number of elements:");
    scanf("%d",&n);
    
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum+a[i];
    }
    avg = (float)sum/n;
    printf("sum = %d\n",sum);
    printf("Average = %.2f\n",avg);

    return 0;
}