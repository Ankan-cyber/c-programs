// Wap to calculate age with given date and date of birth
#include <stdio.h>
#include <string.h>
struct date
{
    int cur_day, cur_year;
    int cur_month;
    int dob_day, dob_year;
    int dob_month;
};

void main()
{
    int year,month, rsl, day, cur_day, day1;
    struct date d;
    // printf("Enter Date of birth: ");
    // scanf("%d,%d,%d",&d.dob_day,&d.dob_month,&d.dob_year);


    // printf("Enter the current date: ");
    // scanf("%d,%d,%d",&d.cur_day,&d.cur_month,d.cur_year);

    d.dob_day = 19;
    d.dob_month = 12;
    d.dob_year = 2005;

    d.cur_day = 9;
    d.cur_month = 1;
    d.cur_year = 2022;

    if (d.cur_year >= d.dob_year)
    {
        year = d.cur_year - d.dob_year;
        if(d.cur_month < d.dob_month)
        {
            year = year - 1;
            month = d.cur_month+ 12;
            rsl = month - d.dob_month;
            if(d.cur_day < d.dob_day)
            {
                rsl = rsl - 1;
                cur_day = d.cur_day + 30;
                day = cur_day - d.dob_day;
                printf("Your Age = %d year, %d month, %d days\n",year,rsl,day);
            }
            else
            {
                day1 = d.cur_day-d.dob_day;
                printf("Your Age = %d year, %d month, %d days\n",year,rsl,day1);
            }
        }
        else
        {
            month = d.cur_month - d.dob_month;
            if(d.cur_day < d.dob_day)
            {
                month = month -1;
                cur_day = d.cur_day + 30;
                day = cur_day - d.dob_day;
                printf("Your Age = %d year, %d month, %d days\n",year,month,day);
            }
            else
            {
                day1 = d.cur_day-d.dob_day;
                printf("Your Age = %d year, %d month, %d days\n",year,month,day1);
            }
        }
    }
    else
    printf("Date of birth needs to be earlier than date of birth");
    
}