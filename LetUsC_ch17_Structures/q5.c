/*There is a structure called employee that holds information like
employee code, name and date of joining. Write a program to
create an array of structures and enter some data into it. Then ask 
the user to enter current date. Display the names of those
employees whose tenure is greater than equal to 3 years.*/
#include <stdio.h>
struct employee{
    int code;
    char name[50];
    struct date {
        int date;
        int month;
        int year;
    }doj;
};
int tyear(const void *p, const void *q);
int main(){
    int s=0;
    struct employee details[100];
    struct date cdate;
    printf("Enter employee details (employee code, employee name, and date, month and year of joining) in order: (type no to stop entering)\n");
    for(s=0; ; s++){
        printf("> ");
        if(!scanf("%d%s%d%d%d", &details[s].code, &details[s].name, &details[s].doj.date, &details[s].doj.month, &details[s].doj.year))
            break;
    }
    fflush(stdin);
    printf("Enter current date, month and year: ");
    scanf("%d%d%d", &cdate.date, &cdate.month, &cdate.year);

    printf("\nDetails of  employees whose tenure is greater or equal to 3 years: ");
    for(int i=0; i<s; i++){
        if(tyear(&details[i].doj, &cdate)>=3)
        printf("\n> Employee Code: %d\tEmpoyee name: %s\tDate of Joining: %d-%d-%d", details[i].code, details[i].name, details[i].doj.date, details[i].doj.month, details[i].doj.year);
    }
}

int tyear(const void *p, const void *q){
    int ndate=((struct date *)q)->date - ((struct date *)p)->date;
    int nmonth=((struct date *)q)->month - ((struct date *)p)->month;
    int nyear=((struct date *)q)->year - ((struct date *)p)->year;
    int ttly=nyear+(nmonth +(ndate)/31.0)/12.0;
    return ttly;
}