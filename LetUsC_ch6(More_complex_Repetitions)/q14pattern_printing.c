/*Write a program to produce the following output
A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A */
#include <stdio.h>


int main(){
    char val=65;
    for(int i=7; i>=1; i--){    //for row
        for(int j=1; j<=7; j++){ //for first half of design up to G
            if(j<=i)
                printf(" %c ", 'A'+ j - 1); //'B'='A'+1, while B is 2nd element simillarly jth element will be 'A'+(j-1)
            else
                printf("   ");  // then we add space since we have to continue upto 13 column
        }
        for(int l=6; l>=1; l--){ // for next half. l is initialized to 6 because we have to deal with remaining six column
            if(l<=i)       //note for both i=7 and i=6 this loop print same thing since l being six and decteemented, l will be less than i for these two row
                printf(" %c ", 'A' + l - 1);
            else
                printf("   ");
        }
        printf("\n"); //move cursor to next row 
    }
    return 0;
}