#include <stdio.h>
#include <math.h>
float mean(int *, int);
float sta_dev(int *, int, float *);
int main(){
    int i=0, array[100];
    float m, sd;
    printf("Enter data: \n");
    while(scanf("%d", &array[i]))
        i++;
    printf("i=%d", i);
    m=mean(array, i);
    sd=sta_dev(array, i, &m);
    printf("Mean = %f\n Standard Deviation = %f", m, sd);
    return 0;
}
float mean(int *array, int o){
    float sum=0, m;
    for(int i=0; i<o; i++)
        sum+=array[i];
    m=sum/o;
    printf("sum = %fo=%d", sum, o);
    return m;
}
float sta_dev(int *array, int o, float *x){
    float sum=0, sd;
    for(int i=0; i<o; i++)
        sum+=pow((array[i] - *x), 2);
    sd = sqrt(sum/o);
    return sd;
}