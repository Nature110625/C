#include<stdio.h>
void dig_extractor(int*, int *);
int main(){
    int num, sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i, n=num; n>0;){
        dig_extractor(&n, &i);
        sum+=i;
    }
    printf("The sum of digits of %d = %d", num, sum);
    return 0;
}
void dig_extractor(int *num, int *dig){
    *dig=*num%10;
    *num/=10;
}