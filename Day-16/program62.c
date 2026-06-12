#include<stdio.h>
int main()
{
    int arr[] = {1,2,2,3,2,4,3};
    int n = 7;
    int i,j,count,maxCount = 0,element;

    for(i=0;i<n;i++)
    {
        count = 1;

        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        if(count>maxCount)
        {
            maxCount=count;
            element=arr[i];


        }
    }
    printf("Maximum frequency element = %d",element);
    printf("\nfrequency=%d",maxCount);

    return 0;
}