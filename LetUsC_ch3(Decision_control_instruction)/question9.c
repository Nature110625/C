#include <stdio.h>

int main() {
    int l, b, area, perimeter;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d%d", &l, &b);
    area= l*b;
    perimeter= 2*(l+b);
    if (area>perimeter)
        printf("The area of rectangle is greater than perimeter of rectangle.");
    else {
        if (area==perimeter)
            printf("The area of rectangle is equal to perimeter of rectangle.");
        else
            printf("The perimeter of rectangle is greater than area of rectangle.");
    }
}