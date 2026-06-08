#include<stdio.h>
int palindrome(int n)
{
    int rev=0,temp=n;
    while(temp>0)
    {
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    return (rev==n);
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);

    if(palindrome(n))
    printf("palindrome");
    else
    printf("not pallindrome");

    return 0;
}
