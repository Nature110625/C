/*Define a function getfloat(), which would receive a numeric string
from the keyboard, convert it to a float value and return the float to
the calling function.*/

#include <stdio.h>
#include <conio.h>

//we didn't use float since it behave abruptly
double getfloat(){
    printf("Enter any real number: ");
    char num[50];
    scanf("%s", num);
    double ans;
    sscanf(num, "%lf", &ans);
    return ans;
}
int main(){
    double a;
    a=getfloat();
    printf("you entered %lf", a);
    return 0;
}