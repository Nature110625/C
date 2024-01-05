#include <stdio.h>
#include "C:\Users\prakr\OneDrive\Documents\GitHub\C\LetUsC_ch12\Interest.h"

int main() {
    int pr, rti, t;
    printf("Enter principal, rate of interest (in percentage), time interval (in years): ");
    scanf("%d%d%d", &pr, &rti, &t);
    printf("Simple Interest = %d\nAmount = %d", SI(pr, rti, t), AT(pr, rti, t));
    return 0;
}