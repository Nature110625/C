/*Write a program to print all prime numbers from 1 to 300. 
(Hint: Use nested loops, break and continue)*/
#include <stdio.h>

int main(){
    int num, prime;
    for(num=1; num<=300; num++){    //runs to check num is prime or not
        for(int i=1; i<=num; i++){  //runs to check num is divisible by any i<=num or not
            if(num%i!=0||i==1||i==num)  //if num is not divisible by i other than 1 or num itself
                prime=1;        //retain the value '1' in the variable prime
            else{               //if num is divisible by any i other than 1 or num itself
                prime=0;    //change value of variable prime to '0'
                break;      //takes control to the outer loop if block
            }
        }
        if(prime==1)    // If inner for loop runs without breaking
            printf("%d\n", num);
    }
}