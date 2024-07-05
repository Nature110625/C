#include <stdio.h>

int main() {
    int cx, cy, r, x, y;
    printf("Enter the coordinate of center of circle: ");
    scanf("%d%d", &cx, &cy);
    printf("Enter radius of the circle: ");
    scanf("%d", &r);
    printf("Enter the coordinate of any point: ");
    scanf("%d%d", &x, &y);
    if((x-cx)*(x-cx) + (y-cy)*(y-cy) == r*r)
        printf("The point lies on the circle");
    if((x-cx)*(x-cx) + (y-cy)*(y-cy) < r*r)
        printf("The point lies inside the circle");
    if((x-cx)*(x-cx) + (y-cy)*(y-cy) > r*r)
        printf("The point lies outside the circle");
}