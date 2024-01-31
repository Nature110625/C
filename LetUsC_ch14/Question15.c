#include <stdio.h>
#include <conio.h>

int main(){
    int num, check=1, dqueue[10];
    char val, ri;
    while(check){
        printf("Retrieve(r)/Insert(i): ");
        scanf("%c", &ri);
        if(ri=='r'){
            printf("Enter the value and type L or R(depending where you want to enter value): ");
            scanf("%d%c", &dqueue[i], &val);
            i++;
        }
        else if(ri=='i'){
            printf("Type L or R(depending from where you want to retrieve value): ");
        }
        else
            break;
    }
}