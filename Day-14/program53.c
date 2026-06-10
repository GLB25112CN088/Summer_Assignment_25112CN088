#include<stdio.h>
int main()
{
    int a[100],n,key,i,found=0;

    printf("enter number of elements:");
    scanf("%d",&n);

    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elements to search:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            found = 1;
            printf("elements found at position%d",i+1);
            break;
        }
    }
    if(found==0)
    printf("elements not found");

    return 0;
}