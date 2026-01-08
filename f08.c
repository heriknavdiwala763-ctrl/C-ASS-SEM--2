#include<stdio.h>
int find_max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int find_min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int a,b,max,min;
    printf("enter two numbers :: ");
    scanf("%d %d",&a,&b);
    max=find_max(a,b);
    min=find_min(a,b);
    printf("\nmaximum number=%d",max);
    printf("\nminimum number=%d",min);
    return 0;
}