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