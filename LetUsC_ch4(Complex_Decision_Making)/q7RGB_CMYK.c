/*In digital world colors are specified in Red-Green-Blue (RGB) format,
with value of R, G, B varying on an integer scale of 0 to 255. In
print publishing the colors are mentioned in Cyan-Magenta-Yellow-
Black(CMYK) format, with values of C, M, Y, and K varying on a real
scale from 0.0 to 1.0. Write a program that converts RGB color to 
CMYK color as per the following formulae:
White = Max(Red/255, Green/255, Blue/255)
Cyan = ((White-Red/255)/White)
Magenta = ((White-Green/255)/White)
Yellow = ((White-Blue/255)/White)
Black = 1-White
Note that if the RGB values are all 0, then the CMY values are
all 0 and the K value is 1.*/
#include <stdio.h>

int main() {
    float red, blue, green, white, max, c, m, y, k;
    printf("Enter the value of red, green, blue (respectively): ");
    scanf("%f%f%f", &red, &green, &blue);
    if (red==0 && green==0 && blue==0) {
        c=m=y=0;
        k=1;
    }
    else {
        red=red/225;
        green=green/225;
        blue=blue/225;

        max=red;
        if(green>max)
            max=green;
        if (blue>max)
            max=blue;
        
        white=max;
        c=(white-red)/white;
        m=(white-green)/white;
        y=(white-blue)/white;
        k=1-white;
    }
    printf("Cyan= %f, Magenta= %f, Yellow= %f, Black= %f", c, m, y, k);
    return 0;
}