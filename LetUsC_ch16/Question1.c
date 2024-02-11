/*Write a program that uses an array of pointers to strings str[ ].
Receive two strings str1 and str2 and check if str1 is embedded in
any of the strings in str[ ]. If str1 is found, then replace it with str2.
char *str[ ] = {
                    "We will teach you how to...",
                    "Move a mountain",
                    "Level a building",
                    "Erase the past",
                    "Make a million",
                    "...all through C!"
                } ;
For example if str1 contains "mountain" and str2 contains "car",
then the second string in str should get changed to "Move a car".*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 6
int check(char *, char *);
void modify(char **, char *, char *, char *);
void addnew(char *, char *);
int main(){
    char val1[100], val2[100], *val;
    char *str[]={
                    "We will teach you how to...",
                    "Move a mountain",
                    "Level a building",
                    "Erase the past", 
                    "Make a million", 
                    "...all through C!"
                    };
    //takes entry
    printf("Enter the value you want to find: ");
    scanf("%s", val1);
    printf("Enter the value you want to replace with: ");
    scanf("%s", val2);

    for(int i=0; i<LEN; i++){   //select elements of array of pointer i.e. address of string
        val=str[i];     //passes base address of string to char pointer
        while(*val!='\0'){  //select character and runs till the selected string ends
            if(*val==val1[0])   //checks if the selected character matches the initial character of string to be found
                if(check(val, val1))    //checks if the whole word to be found is present or not
                    modify((char **)&str[i], val, val2, val1);  //passes address of selected array element, address of first character matched
                                                                //base address of word that is going to be filled and base address of word to be found  
        val++;
        }
    }
    //for printing modified para
    for(int i=0; i<strlen(str[i]); i++){
        val=str[i];
        printf("\n");
        while(*val!='\0'){
            printf("%c", *val); //prints one character at a time
            val++;
        }
    }

}

//checks the presence of whole source string (i.e. untill null character found) is present in the target address and in continuity or not
int check(char *t, char *s){
    while(*s!='\0'){    //tracks null character
        if(*t!=*s)
            return 0;   //return 0 when first source string character don't matches target address character
        s++, t++;       //increment to verify every character before returning 1
    }
    return 1;
}

//do required modification
void modify(char **t, char *fr, char *a, char *r){
    char *val= *t;  //this variable stores the base address of string that is going to be replaced
    int lv=strlen(val), lr=strlen(r), la=strlen(a); //stores lengths of various strings
    int len = lv-lr+la; //stores required length that is discussed just below
    //creates new array of char of required length and stores its base address in the selected array element of array of pointers
    *t=(char *)malloc(len+1); //+1 for accomodating \0
    char *t1=*t;        // stores the new array address that is going to be filled in instructed way
    while(*val!='\0'){ //select each character of string, that is stored in it, one by one until it ends
        if(val<fr || val>=fr+lr){   // if the address of character dont match with the address of characters(that matched with the character of the string to be found)
            *t1=*val;               //the character gets assigned to new string
            t1++;                   //only get incrimented when value get assigned into it
        }
        else if(val==fr){   //when the address matches with the address of first character(that matched with the character of the string to be found) 
            addnew(t1, a);  //the whole string that was expected to replace found string get filled in new string
            t1+=la;     // and address of new string gets updated according to filled string. so that each character get filled at right place
        }                                                                                                          
        val++;
    }
    *t1='\0';//then in the end new string gets null character to become a complete string
}

//add characters source string at the target address(that wil be incrimented) in continuity untill the source string ends. 
void addnew(char *t, char *s){
    while(*s!='\0'){
        printf("2");
        *t=*s;
        t++, s++;
    }
}