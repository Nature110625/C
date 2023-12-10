#include <stdio.h>

int main(){
    int i=1, j, k, val=1;
    while(i<=4){
        j=1;
        while(j<=4-i){
            printf(".");
            j++;
        }
        k=1;
        while(k<=i){
            printf("%d ", val);
            val++;
            k++;
        }
        printf("\n");
        i++;
    }
}