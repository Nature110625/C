/*Receives string from keyboards and write them to the file*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *fp;
    char val[100];

    fp=fopen("testSubjects/test", "w");
    if (fp==NULL){
        printf("Cannot open file.");
        exit(1);
    }
    printf("Enter a few line of text: ");
    while(strlen(gets(val))>0){ //to end the program hit enter twice
        fputs(val, fp);
        fputs("\n", fp);
    }
    fclose(fp);
    return 0;
}