#include<stdio.h>
int even(int n);
int main()
{
    int n;
    printf("enter a positive integer :: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("\nplease enter a non-negative integer");
    }
    else
    {
        if(even(n))
        {
            printf("\n%d is an even number",n);
        }
        else
        {
            printf("\n%d is an odd number",n);
        }
    }
    return 0;
}
int even(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 0;
    }
    else
    {
        return even(n-2);
    }
}