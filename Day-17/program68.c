#include<stdio.h>
int main()
{
    int a[] = {1,2,3,4};
    int b[] = {2,4,5,6};
    int i,j;

    printf("common elements:");

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i] == b[j])
            {
                printf("%d",a[i]);
                break;
            }
        }
    }
    return 0;
}