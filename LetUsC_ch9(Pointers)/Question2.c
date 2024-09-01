#include <stdio.h>

void avp(float, float, float, float *, float *);
int main(){
    float s1, s2, s3, av, p;
    printf("Enter the marks of student in three subjects: ");
    scanf("%f%f%f", &s1, &s2, &s3);
    avp(s1,s2,s3, &av, &p);
    printf("Average of marks = %f\nPercentage of marks = %f", av, p);
    return 0;
}
void avp(float s1, float s2, float s3, float *x, float *y){
    *x= (s1+s2+s3)/3;
    *y= *x;
}