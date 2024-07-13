/**/
#include <stdio.h>
int main(){
    float num, sum=0.0, num_f=1.0;
    for(num=1; num<=7; num++){
        for(int i=1; i<=num; i++){
            num_f*=i;
        }
        sum+=num/num_f;
    }
    printf("The sum of first seven term of given equation is %f", sum);
}