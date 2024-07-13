/*The natural logarithm can be approximated by the following series
((x-1)/x) + ((1/2)*((x-1)/x)^2) + ((1/2)*((x-1)/x)^3) + ((1/2)*((x-1)/x)^4) + ...
if x is input through the keyboard, write a program to calculate the 
sum of first seven terms of this series.*/

#include <stdio.h>
#include <math.h>
int main(){
    float x, ans=0.0, val=1.0;
    printf("Enter an integer: ");
    scanf("%f", &x);
    for(int i=1; i<=7; i++){
        for(int j=1; j<=i; j++){    //take care of power of term ((x-1)/x)
            val*=(x-1)/x;
        }
        if(i==1)
            ans+=val;
        else
            ans+=(0.1/2)*val;
    }
    printf("The sum of first seven terms of the given series = %f", ans);
}