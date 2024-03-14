/* this code is answer of two question
Question1: Develop a program that receives the month and year from the
keyboard as integers and prints the calendar in the following
format...
Question2: Modify the above program suitably so that once the calendar for a
particular month and year has been displayed on the screen, then
using arrow keys the user must be able to change the calendar in
the following manner...*/
#include<stdio.h>
#include<windows.h>
#include<conio.h>

//macros defining arrow name to its ASCII value
#define  UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

//initialising user defined function
void gotoxy ( short int col, short int row );
int no_ofday(int, int);
int leap(int);
int week_no(int, int);
int print_calander(int, int);
int getkey();
void change_aqto_key(int *, int *, int *);

int main(){
    int mnum, year;
    printf("Enter month number and year: ");
    scanf("%d%d", &mnum, &year);    //takes entry of month number and year from user
    print_calander(mnum, year);     //prints the calender of passed month and year
}

int print_calander(int mnum, int year){
    int wnum, nday, k, key=0;   
    char wname[7][10]={"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};    //stores the week names
    
    //for printing calander as arrow keys directs, till escape button is not clicked
    while(key!=27){     //27 is ASCII value of escape character     
        wnum=week_no(mnum, year);   //0 => monday, 1 => tuesday, ..., 6 => sunday; stores the week number associated with date 1/mnum/year
        nday=no_ofday(mnum, year);  //stores number of days in the month of the given year
        k=1;    //since every month starts with date 1
        system("cls");  //clears screen
        if(nday==0){    //returns a message if month number entered is invalid
            printf("Invalid entry!!");
            return 0;
        }
        for(int i=0; i<6; i++){     //prints the row of calander
            for(int j=0; j<7; j++){     //prints column of calander
                gotoxy(j*5, i);        //place cursor as directed
                if(i==0)         //week names get printed in first row
                    printf("%s", wname[j]);
                else if((j>=wnum && i==1)||(i<5 && i>1)||(i==5 && k<=nday)){ // checks that 1 get printed below right week, prints month date till no. of date reached
                    printf("%d", k);
                    k++;
                }

            }
            printf("\n");
        }
        change_aqto_key(&mnum, &year, &key);    //change the value of month number and year as directed by key
    }
    return 0;
}

//pointer is used to pass more than one value
//take entry of arrow key 
void change_aqto_key(int *mnum, int *year, int *key){
    *key=getkey();
    switch(*key){
        case UP:
            *year++;
            break;
        case DOWN:
            if(*year<=1)
                return;
            *year--;
            break;
        case LEFT:
            if(*mnum==12){
                *year++;
                *mnum=1;
                return;
            }
            *mnum--;
            break;
        case RIGHT:
            if(*mnum==1){
                *year--;
                *mnum=12;
                return;
            }
            *mnum++;
            break;
    }
}

//given function to place cursor at passed coordinates
void gotoxy ( short int col, short int row ){
    HANDLE hStdout = GetStdHandle ( STD_OUTPUT_HANDLE ) ;
    COORD position = { col, row } ;
    SetConsoleCursorPosition ( hStdout, position ) ;
}

//return number of day present in given month of given year
int no_ofday(int num, int y){
    if (num==2){    // for february month
        if(leap(y))
            return 29;
        else
            return 28;
    } 
    else if(num<=6){ //for month less than july
        if(num%2==0)
            return 30;
        else
            return 31;
    }
    else if(num<=12){   //for month greate than july
        if(num%2==0)
            return 31;
        else
            return 30;
    }
    else{
        return 0;
    }
}

//returns the week number of 1 date of given month of given year
int week_no(int mon, int year){
    int nleap=0, nday_mon=0, week_num=0;
    for(int i=1; i<year; i++ ){// counts leap years till the given year(excluding given year)
        if(leap(i))
            nleap++;    //stores the number of leap year till the given year(excluding given year)
    }
    
    for(int i=1; i<mon; i++){   //counts number of days present if given year untill the given month starts (excluding given month)
        nday_mon+=no_ofday(i, year);    //stores numbers of days
    }
    week_num = (365*year+nleap+nday_mon-1)%7;   //week number is given by the remainder of division of total days passed(excluding the required date) by 7
    
    return week_num;
}

//checks if the given year is leap or not
int leap(int year){
    if((year%4==0 && year%100!=0)||year%400==0)
        return 1;
    return 0;
}

//gets the entry of arrow key
int getkey( ){
    int ch ;
    ch = getch( ) ;
    if ( ch == 224 ) 
    {
    ch = getch( ) ;
    return ch ;
    }
    return ch ;
}
/*The getch() function in C and C++ returns the ASCII value of the character read fro the keyboard.
When you press an arrow key, getch() returns two values: 224 and then the ASCII value of the arrow
key. This is because arrow keys are special keys and require two characters to represent them.
    The firt value, 224, is an escape character. It tells the program that the next character is a
special key. The second value is the ASCII value of the arrow key. For esample, the ASCII value for 
the up arrow key is 72.*/