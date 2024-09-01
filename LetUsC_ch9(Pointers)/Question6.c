#include <stdio.h>
#include <math.h>
void check(int, int, int, int, int, int, int, int);
void ar(int, int, int, int, int, int, double *);
void dis(int, int, int, int, double *);
int main(){
    int x1, y1, x2, y2, x3, y3, xp, yp;
    printf("Enter the coordinate of vertex A of the triangle: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter the coordinate of vertex B of the triangle: ");
    scanf("%d%d", &x2, &y2);
    printf("Enter the coordinate of vertex C of the triangle: ");
    scanf("%d%d", &x3, &y3);
    printf("Enter any point: ");
    scanf("%d%d", &xp, &yp);
    check(x1, y1, x2, y2, x3, y3, xp, yp);
}
void check(int x1, int y1, int x2, int y2, int x3, int y3, int xp, int yp){
    double area, a1, a2, a3, sum;
    ar(x1, y1, x2, y2, x3, y3, &area);
    ar(x1, y1, xp, yp, x3, y3, &a1);
    ar(x1, y1, xp, yp, x2, y2, &a2);
    ar(x2, y2, xp, yp, x3, y3, &a3);
    sum=a1+a2+a3;
    if(area == 0)
        printf("\nThe given coordinate don't form a triangle.");
    else if(a1==0 || a2==0 || a3==0)
        printf("\nThe given point lies on the triangle.");
    else if((sum - area)*(sum -area)<0.1)   //"(int) sum == (int)area" can also be used
        printf("\nThe given point lies inside the triangle.");
    else
        printf("\nThe given point lies outside the triangle.");
}
void ar(int x1, int y1, int x2, int y2, int x3, int y3, double *area){
    double a, b, c, s;
    dis(x1, y1, x2, y2, &a);
    dis(x2, y2, x3, y3, &b);
    dis(x1, y1, x3, y3, &c);
    s=(a+b+c)/2.0;
    *area=sqrt(s*(s-a)*(s-b)*(s-c));
}
void dis(int x1, int y1, int x2, int y2, double *d){
    *d=sqrt((x2 - x1)*(x2 - x1) + (y1 - y2)*(y1 - y2));
}