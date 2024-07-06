/*If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is valid or not. The
triangle is valid if the sum of two sides is greater than the largest of
the three sides*/
#include <stdio.h>

int main() {
    float a, b, c, l_num, s_num;
    printf("Enter length of three sides of the triangle: ");
    scanf("%f%f%f", &a, &b, &c);
    (a>b)?(a>c?((s_num=b+c) && (l_num=a)):((s_num=a+b) && (l_num=c))):(b>c?((s_num=a+c) && (l_num=b)):((s_num=a+b) && (l_num=c)));
    if (l_num<s_num)
        printf("This is a valid triangle.");
    else
        printf("This is not a valid triangle.");
    return 0;
}