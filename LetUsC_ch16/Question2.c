/*Write a program to sort a set of names stored in an array in
alphabetical order.*/
#include <stdio.h>
#define L 11

void fill(char *, char *);

int main(){
    char val[100];
    char names[L][100]={
                    "Prakriti",
                    "Pr",
                    "Prak",
                    "Niharika", 
                    "Chaitanya",
                    "Preeti",
                    "Tripti",
                    "Neha",
                    "Niju",
                    "Gyanu",
                    "Chunnu"
                };
    //here bubble sort method is used
    for(int k=0; k < L-1; k++){ //this loop iterates the condition checking step n-1 times, where n is the number of names we have to sort 
        for(int i=0; i< L-1; i++){ //this loop handle the row of 2d string array
            for(int j=0; names[i][j]!='\0'; j++){    // this loop handle colunm and stops when finds null character in ith or (i+1)th row
                if(names[i][j]>names[i+1][j]){  //if true swap the ith and (i+1)th row and break loop handeling column and move to next word
                    fill(val, names[i]);
                    fill(names[i], names[i+1]);
                    fill(names[i+1], val);
                    break;
                }
                else if(names[i][j]<names[i+1][j])  //if character found is already small it skip that word and move to next word
                    break;
                //if the selected characters in character in ith or (i+1)th row are equal, then next character in same word is checked in innermost loop
                //if the null character appear first in ith row this means no change is needed
                //if the null character appear first in (i+1)th row then the first if block will do required changes as character in ith row will always greater than null character
            }
        }
    }
    
    //print sorted names
    for(int i=0; i<L; i++){
        for(int j=0; names[i][j]!='\0'; j++)
            printf("%c", names[i][j]);
        printf("\n");
    }
}

//fill source string character in target string
void fill(char *t, char *s){
    while(*s!='\0'){
        *t=*s;
        t++, s++;
    }
    *t='\0';
}