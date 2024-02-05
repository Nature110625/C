#include <stdio.h>
int xstrcmp(char *, char *);
int main(){
    char string1[ ] = "Jerry" ;
    char string2[ ] = "Ferry" ;
    int i, j, k ;
    i = xstrcmp ( string1, "Jerry" ) ;
    j = xstrcmp ( string1, string2 ) ;
    k = xstrcmp ( string1, "Jerry boy" ) ;
    printf ( "%d %d %d\n", i, j, k ) ;
    return 0 ;
}

int xstrcmp(char *s1, char *s2){
    int x, y;
    while(*s1!='\0' || *s2!='\0'){
        x=*s1, y=*s2;
        if(x!=y)
            return x-y;
        s1++;
        s2++;
    }
    return 0;
}