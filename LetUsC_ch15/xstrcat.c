#include <stdio.h>
#include <string.h>
void xstrcat(char *, char *);
int main( ){
    char source[ ] = "Folks!" ;
    char target[ 30 ] = "Hello" ;
    xstrcat ( target, source ) ;
    printf ( "source string = %s\n", source ) ;
    printf ( "target string = %s\n", target ) ;
    return 0 ;
}

void xstrcat(char *t, char *s){
    int ch=0;
    for(; *s!='\0';){
        if(*t=='\0')
            ch=1;
        if(ch){
            *t=*s;
            s++;
        }
        t++;
    }
}