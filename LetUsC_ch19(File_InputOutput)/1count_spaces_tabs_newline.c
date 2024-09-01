/*Count chars, spaces, tabs and newlines in a file named test.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    char ch;
    int noc=0, nos=0, not=0, nol=0; //number of character, spaces, tabs and lines respectively
    fp=fopen("testSubjects/test.c", "r");
    if (fp==NULL){
        puts("Cannot open file");
        exit(1);
    }
    while(1){
        ch=fgetc(fp);
        if (ch==EOF)
            break;
        noc++;  //increement for all character
        if(ch==' ')
            nos++;  //Increement for spaces
        if(ch=='\t')
            not++;  //increement for tabs
        if (ch=='\n')
            nol++;  //Increement if encounter new line
    }
    printf("Number of characters = %d", noc);
    printf("\nNumber of spaces = %d", nos);
    printf("\nNumber of tabs = %d", not);
    printf("\nNumber of newlines = %d", nol);
    printf("\n");
    fclose(fp);
    return 0;
}