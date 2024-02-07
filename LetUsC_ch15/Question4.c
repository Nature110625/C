/*To uniquely identify a book a 10-digit ISBN (International Standard
Book Number) is used. The rightmost digit is a checksum digit. This
digit is determined from the other 9 digits using the condition that
d_1 + 2d_2 + 3d_3 + ... + 10d_10 must be a multiple of 11 (where di
denotes the ith digit from the right). The checksum digit d1 can be
any value from 0 to 10: the ISBN convention is to use the value X to
denote 10. Write a program that receives a 10-digit integer,
computes the checksum, and reports whether the ISBN number is
correct or not.*/

#include <stdio.h>
int isbn(char *);
int chdig(char *);
int main(){
    char val[11];
    int ch=0;
    printf("Enter 10 digit number: ");
    scanf("%s", val);
    if(isbn(val))
        printf("%s is a 10-digit ISBN.", val);
    else
        printf("%s is not a 10-digit ISBN.", val);
}
//checks if the enterd number is isbn number
int isbn(char *a){
    int n, sum=0;
    for(int i=10; *a!='\0'; i--){   //i tracks position of digit
        n=chdig(a); //convert char stored to digit
        sum+=i*n;   //stores sum of digit multiplied by its position
        a++;    
    }
    //if the sum if divisible by 11 no. is isbn
    if(sum%11==0)
        return 1;
    return 0;
}
//convert number character to number
int chdig(char *b){
    int n=*b;
    if(n<=57 && n>=48)  //the ASCII value of 0 is 48 and that of 9 is 57
        return (n-48);
}