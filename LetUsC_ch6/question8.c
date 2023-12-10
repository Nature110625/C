#include <stdio.h>
#include <math.h>
int main(){
    float x, ans=0.0, val=1.0;
    printf("Enter an integer: ");
    scanf("%f", &x);
    for(int i=1; i<=7; i++){
        for(int j=1; j<=i; j++){
            val*=(x-1)/x;
        }
        if(i==1)
            ans+=val;
        else
            ans+=(0.1/2)*val;
    }
    printf("The sum of first seven terms of the given series = %f", ans);
}