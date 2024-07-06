/*Using conditional operators determine:
    (1) Whether the character entered through the keyboard is a
        lower case alphabet or not.
    (2) Whether a character entered through the keyboard is a special
        symbol or not.*/
#include <stdio.h>

int main(){
    char a;
    int val_a;
    printf("Enter the alphabet: ");
    scanf("%c", &a);
    val_a=a;
    (val_a<=122 && val_a>=97)? printf("(A) This is a lower case alphabet.\n") : printf("(A) This is not a lower case alphabet.\n");
    (val_a<=47 && val_a>=0)||(val_a<=64 && val_a>=58)||(val_a<=96 && val_a>=91)||(val_a<=127 && val_a>=123)? printf("(B) This is a special symbol.\n") : printf("(B) This is not a special symbol.\n");
    return 0;
}