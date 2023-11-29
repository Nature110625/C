#include <stdio.h>
int main() {
    int val, dg, num=0;
    printf("Enter a 5-digit number: ");
    scanf("%d", &val);
    
    dg=val%10;
    num=dg*10000;
    
    dg=val/10%10;
    num+=dg*1000;

    dg=val/100%10;
    num+=dg*100;

    dg=val/1000%10;
    num+=dg*10;

    dg=val/10000%10;
    num+=dg;

    printf("Reversed number: %d", num);
    return 0;
}