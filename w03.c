#include<stdio.h>
struct date
{
    int d,m,y;
};
struct emp
{
    int id;
    struct date doj;
};
int main()
{
    struct emp e;
    printf("emp id :: ");
    scanf("%d",&e.id);
    printf("emp date of joining :: ");
    scanf("%d",&e.doj.d);
    printf("emp month of joining :: ");
    scanf("%d",&e.doj.m);
    printf("emp year of joining :: ");
    scanf("%d",&e.doj.y);
    printf("\nemp id=%d",e.id);
    printf("\nemp date of joining %d/%d/%d",e.doj.d,e.doj.m,e.doj.y);
    return 0;
}