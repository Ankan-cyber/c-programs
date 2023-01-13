#include <stdio.h>
struct date // Structure Declaration
{
    int day;
    char month[20];
    int year;
};

int main()
{
    struct date d; //Structure Variable
    printf("Enter Day: ");
    scanf("%d",&d.day);


    printf("Enter Month: ");
    gets(d.month);


    printf("Enter Year: ");
    scanf("%d",d.year);


    printf("Date = %d-%s-%d\n",d.day,d.month,d.year);
    
return 0;
}