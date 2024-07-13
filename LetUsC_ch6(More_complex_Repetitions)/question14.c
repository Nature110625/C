#include <stdio.h>


int main(){
    char val=65;
    for(int i=7; i>=1; i--){
        for(int j=1; j<=7; j++){
            if(j<=i)
                printf(" %c ", 'A'+ j - 1);
            else
                printf("   ");
        }
        for(int l=6; l>=1; l--){
            if(l<=i) 
                printf(" %c ", 'A' + l - 1);
            else
                printf("   ");
        }
        printf("\n"); 
    }
    return 0;
}