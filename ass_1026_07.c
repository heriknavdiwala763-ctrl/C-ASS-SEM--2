#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
int isleap(int year);
struct date nextdate(struct date d,int n);
int main()
{
    struct date d1,d2;
    int n;
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
    printf("Enter number of days to add: ");
    scanf("%d",&n);
    d2=nextdate(d1,n);
    printf("New date is: %02d/%02d/%d\n",d2.day,d2.month,d2.year);
    return 0;
}