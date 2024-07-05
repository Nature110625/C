/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program
to check if all the three points fall on one straight line.*/
#include <stdio.h>
#include <math.h>
int main() {
    int Ax, Ay, Bx, By, Cx, Cy, AB, BC, AC;
    printf("Enter the coordinate of first point: "); 
    scanf("%d%d", &Ax, &Ay);
    printf("Enter the coordinate of second point: "); 
    scanf("%d%d", &Bx, &By);
    printf("Enter the coordinate of third point: "); 
    scanf("%d%d", &Cx, &Cy);
    AB=sqrt((Ax-Bx)*(Ax-Bx)+(Ay-By)*(Ay-By));
    BC=sqrt((Bx-Cx)*(Bx-Cx)+(By-Cy)*(By-Cy));
    AC=sqrt((Ax-Cx)*(Ax-Cx)+(Ay-Cy)*(Ay-Cy));
    if (AB+BC==AC)
        printf("The points are in a straight line.");
    else{
        if (AC+BC==AB)
            printf("The points are in a straight line.");
        else{
            if (AB+AC==BC)
                printf("The points are in a straight line.");
            else
                printf("The points are not in a straight line.");
        }
    
    }
}