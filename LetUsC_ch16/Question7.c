/*Write a program that takes a set of names of individuals and
abbreviates the first, middle and other names except the last name
by their first letter.*/
#include<stdio.h>
int main(){
    char name[50], av_name[40];
    int av_i=0, ln_i=0;
    printf("Enter your full name: ");
    gets(name);
    for(int i=0; name[i]!='\0'; i++){ //adds first character and every character after a space to new variable av_name
        if(i==0||name[i-1]==32){   
            av_name[av_i]=name[i];
            av_i++;
            av_name[av_i]='.';  //also add full stop after each character added to av_name in this loop 
            av_i++;
            ln_i=i; //will store index of last name's first character
        }
    }
    
    av_i--; //represent index of last stored dot

    for(int i=ln_i+1; name[i-1]!='\0'; i++){  //add whole last name with null character and removes the dot after first character of last name
        av_name[av_i]=name[i]; 
        av_i++;
    }

    printf("Your abbreviated name is: ");
    puts(av_name);
}