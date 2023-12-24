#include<stdio.h>
#include<math.h>
int binary_eq(int);
int power(int, int);
int main(){
    int num, eqnum;
    printf("Enter the number: ");
    scanf("%d", &num);
        eqnum=binary_eq(num);
        printf("The binary equivalent of %d = %d\n", num, eqnum);
    return 0;
}
int binary_eq(int n){
    int num=0;
        for(int i=0; n>=1; i++, n/=2)
            num=num + (n%2)*power(10,i);
        return num;
}
int power(int a, int b){
    if(b==0)
        return 1;
    else{
        for(;--b>0;)
            a*=10;
        return a;
    }
}