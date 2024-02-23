/*Write a program to reverse the strings stored in the following array
of pointers to strings:
char *s[ ] = {
"To err is human...",
"But to really mess things up...",
"One needs to know C!!"
} ;*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void rev(char *, char **);
int main(){
    char *s[]={
                "To err is human...",
                "But to really mess things up...",
                "One needs to know C!!",
            };
    for(int i=0; i<3; i++){
       rev(s[i], &s[i]);
    }

    for(int i=0; i<3; i++)
        printf("%s \n", s[i]);
}

void rev(char *str, char **t){
    int n=strlen(str);
    char *val, *end_str=str+n-1;
    *t=(char*)malloc(100);
    val=*t;
    for(int i=0; i<n; i++){
        *val=*end_str;
        val++, end_str--;
    }
    *val='\0';
}