#include<stdio.h>
int main()
{
    int a[100],n,i,key;
    int low,high,mid;

    printf("enter size of array:");
    scanf("%d",&n);

    printf("enter sorted elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter elements to search:");
    scanf("%d",&key);

    low=0;
    high = n-1;

    while(low<=high)
    {
        mid = (low + high)/2;

        if(a[mid] == key)
        {
            printf("elements found at position %d",mid+1);
            return 0;
        }
        else if(key>a[mid])
        low=mid+1;
        else
        high=mid-1;

    }
    printf("elements not found");

    return 0;
}