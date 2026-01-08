#include<stdio.h>
struct emp
{
    int id;
    char name[30];
    float salary;
};
int main()
{
    struct emp e1;
    printf("enter emp id :: ");
    scanf("%d",&e1.id);
    printf("enter emp name :: ");
    scanf("%s",e1.name);
    getchar();
    printf("enter emp salary :: ");
    scanf("%f",&e1.salary);
    printf("\nemp id=%d",e1.id);
    printf("\nemp name=%s",e1.name);
    printf("\nemp salary=%f",e1.salary);
    return 0;
}
