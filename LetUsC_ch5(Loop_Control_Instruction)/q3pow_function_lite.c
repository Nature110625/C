/*Two numbers are entered through the keyboard. Write a program
to find the value of one number raised to the power of another.*/
#include <stdio.h>

int main(){
    int b, p, i=0, ans=1;
    printf("Enter two numbers: ");
    scanf("%d%d", &b, &p);
    while(i<p){
        ans*=b;
        i++;
    }
    printf("%d raised to power %d = %d", b, p, ans);
    return 0;
}