#include <stdio.h>
int main(){
    int num=0;
    while(num<=255){
        char val=num;
        printf("The character corresponding to ASCII value %d is %c\n", num, val);
        num++;
    }
    return 0;
}