#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
}s[5];
int main()
{
    int i,search;
    for(i=0;i<5;i++)
    {
        printf("%d enter your roll number and name :: ",i+1);
        scanf("%d %s",&s[i].roll_no,s[i].name);
    }
    printf("\nenter roll number which yu want to search :: ");
    scanf("%d",&search);
    for(i=0;i<5;i++)
    {
        if(s[i].roll_no==search)
        {
            printf("\nroll number is %d and name is %s",s[i].roll_no,s[i].name);
        }
    }
    return 0;
}