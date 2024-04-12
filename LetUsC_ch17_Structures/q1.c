/*Create a structure to specify data on students given below:
Roll number, Name, Department, Course, Year of joining
Assume that there are not more than 450 students in the college.
(1) Write a function to print names of all students who joined in a
particular year.
(2) Write a function to print the data of a student whose roll
number is received by the function.*/

#include <stdio.h>
#include <conio.h>
struct data {
        int roll_number;
        char name[50];
        char department[100];
        char course[40];
        int yoj;
}; 
void prints_name(int , struct data *, int);
void prints_data(int , struct data *, int);
int main(){
    struct data students[450];

    int year, roll, no_std;
    char ans;
    for(int i=0; i<450; i++){
        printf("enter student %d roll number, name, department, course and year of joining (in order): ", i+1);
        scanf("%d%s%s%s%d", &students[i].roll_number, &students[i].name, &students[i].department, &students[i].course, &students[i].yoj);
        fflush(stdin);
        printf("do you want to enter data (y/n): ");
        scanf("%c", &ans);
        if(ans=='n'){
            no_std=i;
            break;
        }
    }

    printf("enter the year of joining: ");
    scanf("%d", &year);
    prints_name(year, &students[0], no_std);
    
    printf("enter the roll number: ");
    scanf("%d", &roll);
    prints_data(roll, &students[0], no_std);
}

void prints_name(int year, struct data *std, int n){
    for(int i=0; i<=n; i++){
        if(std[i].yoj==year)
            printf("%s\n", std[i].name);
    }
}

void prints_data(int roll, struct data *std, int n){
    for(int i=0; i<=n; i++){
        if(std[i].roll_number==roll)
            printf("roll number: %d \nName: %s \nDepartment: %s \nCourse: %s \nYear of joining: %d\n", std[i].roll_number, std[i].name, std[i].department, std[i].course, std[i].yoj);
    }
}