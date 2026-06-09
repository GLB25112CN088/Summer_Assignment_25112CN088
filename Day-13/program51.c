#include<stdio.h>
int main()
{
    int a[10],n,i,largest,smallest;
    printf("enter number of elements:");
    scanf("%d",&n);

    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest = smallest = a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        largest = a[i];
        if(a[i]<smallest)
        smallest = a[i];
    }
    printf("largest = %d\n",largest);
    printf("smallest = %d\n",smallest);

    return 0;
}