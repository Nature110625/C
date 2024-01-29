#include <stdio.h>
#include <math.h>
#define N 10
int main(){
    float x=0, y=0, xy=0, x2=0, y2=0;
    float ans, num[][2]={
                            34.22, 102.43,
                            39.87, 100.93,
                            41.85, 97.43,
                            43.23, 97.81,
                            40.06, 98.32,
                            53.29, 98.32,
                            153.29, 100.07,
                            54.14, 97.08,
                            49.12, 91.59,
                            40.71, 94.85,
                            55.15, 94.65
                        };
    for(int i=0; i<=N; i++){
        x += num[0][i];
        y += num[1][i];
        xy += num[0][i] * num[1][i];
        x2 += num[0][i] * num[0][i];
        y2 += num[1][i] * num[1][i];
    }
    ans= (xy - x*y)/sqrt((N*x2 - x*x)*(N*y2 - y*y));
    printf("The correlation coefficient r = %f", ans);
}