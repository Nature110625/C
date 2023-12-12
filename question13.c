#include <stdio.h>
#include <conio.h>

int main(){
    int val=1;
    for(int i=1; i<=4; i++) {
        printf("\n");
        for(int j=1; j<=4-i; j++)
            printf(" ");
        for(int k=1; k<=i; k++, val++)
            printf(" %d ", val);
    }
    getch();
    return 0;
}