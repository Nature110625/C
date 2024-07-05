#include <stdio.h>

int main() {
    char val;
    int val_num;
    printf("Enter the character: ");
    scanf("%c", &val);
    val_num=val;
    if (val>=65 && val<=90)
        printf("The character is a capital letter (A - Z)");
    else if (val>=97 && val<=122)
        printf("The character is a small case letter (a - z)");
    else if (val>=48 && val<=57)
        printf("The character is a digit (0 - 9)");
    else if (val>=0 && val<=127)
        printf("The character is a special symbol");
    return 0;
}