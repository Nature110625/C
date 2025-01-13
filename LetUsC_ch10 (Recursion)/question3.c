#include <stdio.h>
void fibonacci(int, int, int);
int main(){
    int num1=0, num2=1, count=1;
    printf("Fibonacci Series: ");
    fibonacci(num1, num2, count);
    return 0;
}
void fibonacci(int n1, int n2, int c){
    int n;
    if(c<=25){
        printf("\n%d", n2);
        n=n1;
        n1=n2;
        n2=n+n2;
        c++;
        fibonacci(n1, n2, c);
    }
}