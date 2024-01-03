#include <stdio.h>
#define UPPER (val<=90 && val>=65)
#define LOWER (val<=122 && val>=97)
#define LARGER (x>y? x : y)
int main() {
    char val;
    printf("Enter an alphabet: ");
    scanf("%c", &val);
    if(LOWER)
        printf("%c is a lowercase alphabet.", val);
    else if (UPPER)
        printf("%c is an uppercase alphabet.", val);
    else 
        printf("%c is not an alphabet.", val);

    int x, y;
    printf("\nEnter two integers: ");
    scanf("%d%d", &x, &y);
    printf("%d is the larger number.", LARGER);
    return 0;
}