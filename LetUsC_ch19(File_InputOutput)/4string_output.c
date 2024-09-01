/*Read strings from the file and display them of screen*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    char val[100];
    fp=fopen("testSubjects/test", "r");
    if(fp==NULL){
        printf("Cannot open file");
        exit(1);
    }
    while (fgets(val, 99, fp)!=NULL){
        printf("%s", val);
    }
    printf("\n");
    fclose(fp);
    return 0;
}