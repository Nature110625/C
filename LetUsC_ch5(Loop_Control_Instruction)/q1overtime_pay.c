/*Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every hour
worked above 40 hours. Assume that employees do not work for
fractional part of an hour.*/
#include <stdio.h>
int main(){
    int hr, count=1;
    while(count<=10){
        printf("Enter todays work hours: ");
        scanf("%d", &hr);
        if(hr>40)
            printf("Overtime pay: %d\n", (hr-40)*12);
        else
            printf("Overtime pay: 00\n");
        count++;
    }
    return 0;
}