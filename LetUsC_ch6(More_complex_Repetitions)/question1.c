/*Write a program to print all prime numbers from 1 to 300. 
(Hint: Use nested loops, break and continue)*/
#include <stdio.h>

int main(){
    int num, prime;
    for(num=1; num<=300; num++){
        for(int i=1; i<=num; i++){
            if(num%i!=0||i==1||i==num)
                prime=1;
            else{
                prime=0;
                break;
            }
        }
        if(prime==1)
            printf("%d\n", num);
    }
}