/*Temperature of a city in fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into centigrade degrees.*/
#include <stdio.h>
int main(){
    float val_f, val_c;
    printf ("Enter temperature in degree farenheit: ");
    scanf("%f", &val_f);
    val_c=(val_f-32)*(0.5/0.9);
    printf("Temperature of city in degree centegrade degrees is: %f", val_c);
}