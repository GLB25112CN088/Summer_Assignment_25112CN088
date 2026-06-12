#include<stdio.h>
int main ()
{
    int arr[]= {2,3,3,4,5,5,6};
    int n=7;
    int i,j,k;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n-1;k++)
                {
                    arr[k]= arr[k+1];

                }
                n--;
            }
            else{
                j++;
            }
        }
    }

    printf("array after removing duplicates:\n");

    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}