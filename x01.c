#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
}s[5];
int main()
{
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        printf("enter your %d roll no :: ",i+1);
        scanf("%d",&s[i].roll_no);
        printf("enter your %d name :: ",i+1);
        scanf("%s",s[i].name);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(s[i].roll_no>s[j].roll_no)
            {
                temp=s[i].roll_no;
                s[i].roll_no=s[j].roll_no;
                s[j].roll_no=temp;
            }
        }
    }
    printf("sorted :: \n");
    for(i=0;i<5;i++)
    {
        printf("\nstudent %d roll no is %d",i+1,s[i].roll_no);
        printf("\nstudent %d name is %s",i+1,s[i].name);
    }       
    return 0;
}