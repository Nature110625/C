/*Write a program to generate all combinations of 1, 2 and 3 using for
loop.*/
#include <stdio.h>

int main() {
    for(int i=1; i<=3; i++)
        for(int j=1; j<=3; j++)
            for(int k=1; k<=3; k++){
                if(i==j||i==k||j==k)
                    continue;
                printf("(%d, %d, %d)\n", i, j, k);
            }  
    return 0;
}