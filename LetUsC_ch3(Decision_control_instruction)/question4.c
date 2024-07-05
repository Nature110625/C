#include <stdio.h>

int main() {
    int e_year, first_day;
    long int normal_day, leap_day, total_day;
    printf("Enter the year: ");
    scanf("%d", &e_year);
    normal_day=(e_year-1)*365;
    leap_day=e_year/4-e_year/100+e_year/400;
    total_day= normal_day+leap_day;
    first_day=total_day%7;
    
    if(first_day==0)
        printf("The first day of the year is Monday.");
    if(first_day==1)
        printf("The first day of the year is Tueday.");
    if(first_day==2)
        printf("The first day of the year is Wednesday.");
    if(first_day==3)
        printf("The first day of the year is Thursday.");
    if(first_day==4)
        printf("The first day of the year is Friday.");
    if(first_day==5)
        printf("The first day of the year is Satday.");
    if(first_day==6)
        printf("The first day of the year is Sunday.");
    return 0;
}