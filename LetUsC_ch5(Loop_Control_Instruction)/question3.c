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