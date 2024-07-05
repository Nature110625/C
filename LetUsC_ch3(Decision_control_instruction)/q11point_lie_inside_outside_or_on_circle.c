/*Given coordinates (x, y) of center of a circle and its radius, write 
a program that will determine whether a point lies inside the circle,
on the circle or outside tne circle.*/
#include <stdio.h>

int main() {
    int cx, cy, r, x, y;
    printf("Enter the coordinate of center of circle: ");
    scanf("%d%d", &cx, &cy);
    printf("Enter radius of the circle: ");
    scanf("%d", &r);
    printf("Enter the coordinate of any point: ");
    scanf("%d%d", &x, &y);
    //uses property of circle
    if((x-cx)*(x-cx) + (y-cy)*(y-cy) == r*r)
        printf("The point lies on the circle");
    if((x-cx)*(x-cx) + (y-cy)*(y-cy) < r*r)
        printf("The point lies inside the circle");
    if((x-cx)*(x-cx) + (y-cy)*(y-cy) > r*r)
        printf("The point lies outside the circle");
}