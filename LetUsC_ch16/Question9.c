/*Write a program that receives an integer (less than or equal to nine
digits in length) and prints out the number in words. For example, if
the number input is 12342, then the output should be Twelve
Thousand Three Hundred Forty Two.*/
#include <stdio.h>
#include<string.h>
void num_word(int , int);
void tensplace(int);
int onesplace(int, int);
void teenplace(int, int);
int main(){
    char num[11];
    printf("Enter any natural number (upto 9 digits): ");
    scanf("%s", &num);
    int len=strlen(num);
    if (len>9){
        printf("Entered number exceeds the digit limit");
        return 0;
    }
    for(int i=0; num[i]!='\0'; i++, len--){
        int n=num[i]-48;
        if(len==2||len==5||len==7||len==9){
            if(n==1){
                i++, len--;
                n=num[i]-48;
                teenplace(n, len);
            }
            else
                tensplace(n);
        }
        else
            onesplace(n, len);
    }
}

void teenplace(int digit, int place){
    switch(digit){
        case 0:
            printf("ten ");
            break;
        case 1:
            printf("eleven ");
            break;
        case 2:
            printf("twelve ");
            break;
        case 3:
            printf("thirteen ");
            break;
        case 4:
            printf("fourteen ");
            break;
        case 5: 
            printf("fifteen ");
            break;
        case 6:
            printf("sixteen ");
            break;
        case 7:
            printf("seventeen ");
            break;
        case 8:
            printf("Eighteen ");
            break;
        case 9:
            printf("nineteen ");
            break;
        default:
            printf(" ");
    }
    switch(place){
        case 1:
            printf(" ");
            break;
        case 4:
            printf("thousand ");
            break;
        case 6:
            printf("lakh ");
            break;
        case 8:
            printf("crore ");
            break;
        default:
            printf(" ");
    }
}

void tensplace(int digit){
    switch(digit){
        case 2:
            printf("twenty ");
            break;
        case 3:
            printf("thirty ");
            break;
        case 4:
            printf("forty ");
            break;
        case 5: 
            printf("fifty ");
            break;
        case 6:
            printf("sixty ");
            break;
        case 7:
            printf("seventy ");
            break;
        case 8:
            printf("eighty ");
            break;
        case 9:
            printf("ninty ");
            break;
        default:
            printf(" ");
    }
}
int onesplace(int digit, int place){
    switch(digit){
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5: 
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        default:
            printf(" ");
            return 0;
    }
    switch(place){
        case 3:
            printf("hundred ");
            break;
        case 4:
            printf("thousand ");
            break;
        case 6:
            printf("lakh ");
            break;
        case 8:
            printf("crore ");
            break;
        default:
            printf(" ");
    }
    return 0;
}