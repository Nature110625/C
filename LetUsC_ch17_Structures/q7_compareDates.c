/*Write a function that compares two given dates. To store a date use
a structure that contains three members namely day, month and year. 
If the dates are equal the function should return 0, otherwise it 
should return 1.*/
#include <stdio.h>
struct date{
    int day;
    int month;
    int year;
};
int comp(struct date *, struct date *);
int main(){
    struct date d1, d2;
    int val;
    printf("Enter first date in 'dd mm yyyy format': ");
    scanf("%d%d%d", &d1.day, &d1.month, &d1.year);
    printf("Enter second date in 'dd mm yyyy format': ");
    scanf("%d%d%d", &d2.day, &d2.month, &d2.year);
    val=comp(&d1, &d2);
    if(val==0)
        printf("The dates are  equal.");
    else
        printf("Dates are not equal.");
    return 0;
}
int comp(struct date *a, struct date *b){
    if(a->day==b->day && a->month==b->month && a->year==b->year)
        return 0;
    return 1;
}