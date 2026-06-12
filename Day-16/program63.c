#include<stdio.h>
int main()
{
    int arr[]= {1,4,5,6,2};
    int n=5;
    int sum=7;
    int i,j;

    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("pair=%d %d",arr[i],arr[j]);

            }
        }
    }
    return 0;

}