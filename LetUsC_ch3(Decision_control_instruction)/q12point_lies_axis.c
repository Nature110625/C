/*Given a point (x, y), write aprogram to find out if it lies on the X-
axis, Y-axis or on the origin*/
#include <stdio.h>

int main(){
    int x, y;
    printf("Enter the co-ordinate of the point: ");
    scanf("%d%d", &x, &y);
    if (x==0){
        if(y==0)
            printf("The point is on origin.");
        else
            printf("The point lies on the Y-axis");
    }
    else{
        if (y==0)
            printf("The point lies on X-axis.");
        else
            printf("The point don't lie on origin, X-axis or Y-axis.");
    }
}