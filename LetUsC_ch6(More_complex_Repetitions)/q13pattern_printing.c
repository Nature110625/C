#include <stdio.h>
#include <conio.h>

int main(){
    int val=1;
    for(int i=1; i<=4; i++) {   //for row
        printf("\n");
        for(int j=1; j<4+i; j++){ //for column
            if(j>4-i && j%2!=i%2){ 
                printf("%d", val);
                val++;
            }
            else
                printf(" ");
        }
    }
    return 0;
}