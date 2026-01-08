#include<stdio.h>
struct emp
{
    int id;
    float salary;
}e[5];
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("enter your %d id :: ",i+1);
        scanf("%d",&e[i].id);
        printf("enter your %d salary :: ",i+1);
        scanf("%f",&e[i].salary);
    }
    int min;
    min=e[1].salary;
    for(i=1;i<5;i++)
    {
        if(min>e[i].salary)
        {
            min=e[i].salary;
        }
    }
    for(i=0;i<5;i++)
    {
        if(min==e[i].salary)
        {
            printf("\nmin salary is %f and id is %d",e[i].salary,e[i].id);
        }
    }
    return 0;
}