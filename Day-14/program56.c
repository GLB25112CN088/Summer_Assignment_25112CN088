#include<stdio.h>
int main()
{
    int a[100],n,i,j;

    printf("enter number of elements:");
    scanf("%d",&n);

    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("duplicate elements are:\n");

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                printf("%d",a[i]);
                break;
            }
        }

    }
    return 0;
}