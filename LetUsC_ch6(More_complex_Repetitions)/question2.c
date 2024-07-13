/*Write a program to fill the entire screen with a smiling face. The
smiling face has an ASCII value 1*/
#include <stdio.h>

int main() {
    char val=1;
    for(;;)
        printf("%c", val);
    return 0;
}