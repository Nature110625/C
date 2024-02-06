/*Write a program that generates and prints the Fibonacci words of
order 0 through 5. If f(0) = "a", f(1) = "b", f(2) = "ba", f(3) = "bab",
f(4) = "babba", etc.*/
#include<stdio.h>
#include<string.h>
void fibbo();
int main(){
    char fa[100]="a", fb[100]="b", fp[100];
    printf("Fibonacci series of words: \n");
    for(int i=0; i<5; i++){
        printf("%s\n", fa);
        strcpy(fp, fa); //stores the value of just printed string to form the2nd next string to be printed
        strcpy(fa, fb); //stores the next string to be printed
        strcat(fb, fp); //stores the 2nd next string to be printed
    }
}