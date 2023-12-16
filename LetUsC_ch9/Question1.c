#include <stdio.h>
#include <math.h>

void sumavsd(int , int , int , int , int , float *, float*, float *);
int main(){
    int a1, a2, a3, a4, a5;
    float sum=0.0, av=0.0, sd=0.0;
    printf("Enter five integers: ");
    scanf("%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5);
    sumavsd(a1, a2, a3, a4, a5, &sum, &av, &sd);
    printf("sum = %f\naverage = %f\nstandard deviation = %f\n", sum, av, sd);
    return 0;
}
void sumavsd(int a1, int a2, int a3, int a4, int a5, float *x, float *y, float *z){
    *x=a1+a2+a3+a4+a5;
    *y=*x/5;
    *z=sqrt((pow(*y-a1, 2) + pow(*y-a2, 2) + pow(*y-a3, 2) + pow(*y-a4,2) + pow(*y-a5,2))/5);
}