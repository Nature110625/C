/*Write a program that converts a string like "124" to an integer 124.*/
#include<stdio.h>
void strnum(char *);
int main(){
    char val[100];
    printf("Enter: ");
    scanf("%s", val);
    strnum(val);
}
void strnum(char *a){
    int num;
    while(*a != '\0'){
        num=*a;
        if(num>=48 && num<=57)
            printf("%d", num-48);
        a++;
    }
}