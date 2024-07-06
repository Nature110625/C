#include <stdio.h>
#include <math.h>

int main() {
    int num, r, val=0, i=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num!=0){
        r=num%8;
        num=num/8;
        val+=r*pow(10, i);
        i++;
    }
    printf("%d", val);
    return 0;
}