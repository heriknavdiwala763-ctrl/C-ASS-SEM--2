#include<stdio.h>
int reverse(int n);
int main()
{
    int n,ans;
    printf("enter n :: ");
    scanf("%d",&n);
    ans=reverse(n);
    printf("reverse is %d",ans);
    return 0;
}
int reverse(int n)
{
    int i,r,rev=0;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    return rev;
}