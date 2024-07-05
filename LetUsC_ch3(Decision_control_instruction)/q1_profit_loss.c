/*If cost price and selling price of an item are input through the
keyboard, write a program to determine whether the seller has 
made profit or incurred loss. Also determine how much profit
he made or loss he incurred.*/
#include <stdio.h>

int main() {
    float sp, cp, porl;
    printf("Enter cost price and selling price of the item: ");
    scanf("%f%f", &cp, &sp);
    if(sp>cp)
        printf("The seller has made a Profit of Rs. %f", sp-cp);    //since cost price is the amount seller paid and Selling price is the amount seller got.
    if(cp>sp)
        printf("The seller has made a Loss of Rs. %f", cp-sp);
    if(cp==sp)
        printf("The seller nither made profit nor Loss.");
    return 0;
}