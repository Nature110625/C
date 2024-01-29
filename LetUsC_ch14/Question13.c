#include <stdio.h>
#include <math.h>
#define N 10
int main(){
    float x=0, y=0, xy=0, x2=0;
    float a, b, num[][2]={
                            3.0, 1.5,
                            4.5, 2.0,
                            5.5, 3.5,
                            6.5, 5.0,
                            7.5, 6.0,
                            8.5, 7.5,
                            8.0, 9.0,
                            9.0, 10.5,
                            9.5, 12.0,
                            10.0, 14.0
                        };
    for(int i=0; i<=N; i++){
        x += num[0][i];
        y += num[1][i];
        xy += num[0][i] * num[1][i];
        x2 += num[0][i] * num[0][i];
    }
    b= (N*xy - x*y)/(N*x2 - x*x);
    a= y/N - b*(x/N);
    printf("The required equation is : \n\ty = %f + %fx", a, b);
}