/*Takes the contents of a file and copies them into another file, character by character.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fs, *ft;  //source file and target file respectively
    char ch;

    fs=fopen("testSubjects/test.c", "r");
    if(fs==NULL){
        printf("Cannot opent source file.\n");
        exit(1);
    }

    ft=fopen("testSubjects/test1.c", "w");  //NOTE "w"
    if(ft==NULL){
        printf("Cannot open target file");
        exit(2);
    }

    while(1){
        ch=fgetc(fs);
        if(ch==EOF)
            break;
        
        fputc(ch, ft);      //NOTE fputc()
    }
    fclose(fs);
    fclose(ft);
    return 0;
}
