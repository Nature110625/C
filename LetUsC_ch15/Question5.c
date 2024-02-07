/*A Credit Card number is usually a 16-digit number. A valid Credit
Card number would satisfy a rule explained below with the help of a
dummy Credit Card number—4567 1234 5678 9129. Start with the
rightmost - 1 digit and multiply every other digit by 2.
4 5 6 7 1 2 3 4 5 6 7 8 9 1 2 9
8 12 2 6 10 14 18 4
Then subtract 9 from any number larger than 10. Thus we get:
8 3 2 6 1 5 9 4
Add them all up to get 38.
Add all the other digits to get 42.
Sum of 38 and 42 is 80. Since 80 is divisible by 10, the Credit Card
number is valid.
Write a program that receives a Credit Card number and checks
using the above rule whether the Credit Card number is valid*/

#include <stdio.h>
int chdig(char *);
int main(){
    char val[17], *a;
    int sum_e=0, sum_o=0, n;
    printf("Enter a 16 digit number: ");
    scanf("%s", val);
    a=val;
    for(int i=0; *a<'\0'; i++, a++){    // select one character at a time
        if(*a%2!=0)     //if the charactet is at odd position
            sum_o+=chdig(a);    //character are converted to integer and added to variable storing sum of digits at odd places 
        else
            n=chdig(a); //charactet is converted to integer
            n=2*n;      //if the digit is at even place it has to be doubled
            if(n>=10)   //and if the doubled digit is greater than or equal to 10 it has to be substracted by 9
                n-=9;
            sum_e+=n;   //then added to the variable storing sum of processed digits at even places
    }
    if((sum_o+sum_e)%10==0) 
        printf("%s is a valid credit card number", val);
    else
        printf("%s is not a valid credit card number", val);
}
//convert character numbers into int numbers
int chdig(char *a){
    int n=*a;
    if(n<=57 && n>=48)
        return (n-48);
}