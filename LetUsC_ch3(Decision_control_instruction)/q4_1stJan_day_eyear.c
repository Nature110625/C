/*According to Gregorian calender, it was Monday on the date
01/01/01. If any year is input through the keyboard write a program
to find out what is the day on 1st January of this year.*/
#include <stdio.h>

int main() {
    int e_year, first_day;
    long int normal_day, leap_day, total_day;
    printf("Enter the year: ");
    scanf("%d", &e_year);

    //here we calculated total days including 1 January of entered year and then divided it by 7.
    //The remainder after division will give day, Since day names are continuously assigned to date
    // since the week has 7 days and 1/1/1 was monday. Therefore, (0,7,14...=> sunday), (1, 8, 15...=> Monday), (2, 9, 16...=>Tuesday), (3, 10, 17...=>Wednesday)...
    normal_day=(e_year-1)*365;  
    leap_day=e_year/4-e_year/100+e_year/400;
    total_day= normal_day+leap_day;
    first_day=total_day%7+1;
    
    if(first_day==1)
        printf("The first day of the year is Monday.");
    if(first_day==2)
        printf("The first day of the year is Tueday.");
    if(first_day==3)
        printf("The first day of the year is Wednesday.");
    if(first_day==4)
        printf("The first day of the year is Thursday.");
    if(first_day==5)
        printf("The first day of the year is Friday.");
    if(first_day==6)
        printf("The first day of the year is Satday.");
    if(first_day==0)
        printf("The first day of the year is Sunday.");
    return 0;
}