/*Writes record to a file using structure*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    char another='Y';

    struct emp{
        char name[50];
        int age;
        float bs;
    };
    struct emp e;
    
    fp=fopen("testSubjects/test", "w");
    if(fp==NULL){
        printf("Cannot open file");
        exit(1);
    }

    while(another=='Y'){
        printf("\nEnter Employee name, age and basic salary: ");
        scanf("%s %d %f", e.name, &e.age, &e.bs);
        fprintf(fp, "%s %d %f\n", e.name, e.age, e.bs);

        printf("Add another record(Y/N): ");
        fflush(stdin);
        another=getche();
    }
    fclose(fp);
    return 0;
}