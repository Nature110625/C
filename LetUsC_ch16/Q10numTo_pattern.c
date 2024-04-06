/*Write a program that receives a 5-digit number and prints it out in
large size as shown below.*/
#include<stdio.h>
void one(int);
void two(int);
void three(int);
void four(int);
void five(int);
void six(int);
void seven(int);
void eight(int);
void nine(int);
void zero(int);
void printPattern(int, int);
int main(){
    int num, dig[9];
    printf("Enter a nine or less digit number: ");
    scanf("%d", &num);
    for(int d=100000000,i=0; i<9; i++, d/=10){
        dig[i]=num/d;
        num%=d;
    }
    for(int i=0; i<8; i++){
        for(int j=0; j<9; j++){
            printPattern(dig[j], i);
            printf("         ");
        }
        printf("\n");
    }

}
void printPattern(int dig, int i){
    switch(dig){
        case 1:
            one(i);
            break;
        case 2:
            two(i);
            break;
        case 3:
            three(i);
            break;
        case 4:
            four(i);
            break;
        case 5: 
            five(i);
            break;
        case 6:
            six(i);
            break;
        case 7:
            seven(i);
            break;
        case 8:
            eight(i);
            break;
        case 9:
            nine(i);
            break;
        case 0:
            zero(i);
            break;
        default:
            printf("Invalid entry");
    }
}
void one(int i){
    for(int j=0; j<3; j++){
        if(j==1||(j==0 && i==1)||i==7)
            printf("#");
        else
            printf(" ");
    }
}
void two(int i){
    for(int j=0; j<5; j++){
        if((j==0 && i>4)||i==0||(j==4 && i<4)||i==4||i==7)
            printf("#");
        else
            printf(" ");
    }
}
void three(int i){
    for(int j=0; j<5; j++){
        if(i==0||j==4||i==3||i==7)
            printf("#");
        else
            printf(" ");
    }
}
void four(int i){
    for(int j=0; j<5; j++){
        if(i==4||(j==0 && i<4)||(j==2 && i>2))
            printf("#");
        else
            printf(" ");
    }
}
void five(int i){
    for(int j=0; j<5; j++){
        if((j==0 && i<3)||i==0||(j==4 && i>3)||i==3||i==7)
            printf("#");
        else
            printf(" ");
    }
}
void six(int i){
    for(int j=0; j<5; j++){
        if(j==0||i==0||(j==4 && i>4)||i==4||i==7)
            printf("#");
        else
            printf(" ");
    }
}
void seven(int i){
    for(int j=0; j<5; j++){
        if(i==0||j==4)
            printf("#");
        else
            printf(" ");
    }
}
void eight(int i){
    for(int j=0; j<5; j++){
        if(i==0||j==0||j==4||i==4||i==7)
            printf("#");
        else
            printf(" ");
    }
}
void nine(int i){
    for(int j=0; j<5; j++){
        if(i==0||j==4||i==3||i==7||(j==0 && i<3))
            printf("#");
        else
            printf(" ");
    }
}
void zero(int i){
    for(int j=0; j<5; j++){
        if(i==0||j==4||i==7||j==0)
            printf("#");
        else
            printf(" ");
    }
}