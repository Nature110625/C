/*Write a program to print all the ASCII values and their equivalent
characters using a while loop. The ASCII values vary from 0 to 255.*/
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