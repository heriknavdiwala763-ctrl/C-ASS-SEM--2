#include<stdio.h>
struct emp
{
    int id;
    float salary;
};
int main()
{
    struct emp e;
    printf("enter emp id :: ");
    scanf("%d",&e.id);
    printf("enter emp salary :: ");
    scanf("%f",&e.salary);
    printf("\nemp id=%d",e.id);
    printf("\nemp salary=%f",e.salary);
    return 0;
}