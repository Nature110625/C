#include <stdio.h>
int get_sum(int);
int main(){
    int sum, count=1;
    sum=get_sum(count);
    printf("The sum of first 25 natural number = %d", sum);
    return 0;
}
int get_sum(int c){
    int sum=0;
    if(c<=25){
        sum=c+get_sum(c+1);
    }
    return sum;
}