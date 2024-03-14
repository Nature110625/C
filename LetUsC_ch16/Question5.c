/*Write a program to delete all vowels from a sentence. Assume that
the sentence is not more than 80 characters long.
THEORY: character       ASCII value     |       character       ASCII value
        A               65                      a               97
        E               69                      e               101
        I               73                      i               105
        O               79                      o               111
        U               85                      u               117*/
#include <stdio.h>
int vowel(char val);
int main(){
    char sen[100];
    int i=0;
    puts("enter:"); //take entry untill enter is pressed (stores space containing string also)
    gets(sen);
    puts(sen);
    while(sen[i]!='\0'){
        if(vowel(sen[i])){  //if the selected char is vowel 
            for(int j=i; sen[j]!='\0'; j++)     //select the characte of string till end starting from the vowel
                sen[j]=sen[j+1];    //each indices starting from the vowel containing index get the character of succeeding index till the null character reached
                                    // null character also, get copied to preceeding index.
            i--;
        }
        i++;
    }
    puts(sen);  //prints the sentence after omitting vowels
}

//checks if the passed value is vowel or not
int vowel(char val){
    if(val=='A'||val=='a'||val=='E'||val=='e'||val=='I'||val=='i'||val=='O'||val=='o'||val=='U'||val=='u')
        return 1;
    return 0;
}