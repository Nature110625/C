#include <stdio.h>

int main() {
    float sp, cp, porl;
    printf("Enter cost price and selling price of the item: ");
    scanf("%f%f", &cp, &sp);
    if(sp>cp)
        printf("The seller has made a Profit of Rs. %f", sp-cp);
    if(cp>sp)
        printf("The seller has made a Loss of Rs. %f", cp-sp);
    if(cp==sp)
        printf("The seller nither made profit nor Loss.");
    return 0;
}