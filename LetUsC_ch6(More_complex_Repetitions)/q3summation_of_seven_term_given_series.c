/*Write a program to add first seven terms of the following series
1/1! + 2/2! + 3/3! + ...
using for loop*/

#include <stdio.h>
int main(){
    float num, sum=0.0, num_f=1.0;
    for(num=1; num<=7; num++){      //Do summation of first seven term of the given series and stores in variable sum
        for(int i=1; i<=num; i++){  //find factorial of number stored in variable num as it is required in summation
            num_f*=i;   
        }
        sum+=num/num_f; 
    }
    printf("The sum of first seven term of given equation is %f", sum);
}