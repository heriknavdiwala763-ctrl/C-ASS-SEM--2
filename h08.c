#include<stdio.h>
long long power(int base,int exp)
{
    if(exp==0)
    {
        return 1;
    }
    else
    {
        return base*power(base,exp-1);
    }
}
int main()
{
    int base,exp;
    long long result;
    printf("enter base number :: ");
    scanf("%d",&base);

    printf("enter power number :: ");
    scanf("%d",&exp);
    result=power(base,exp);
    printf("\n%d*%d=%lld",base,exp,result);
    return 0;
}