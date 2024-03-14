/*Write a program that will read a line and delete from it all
occurrences of the word ‘the’.*/
#include <stdio.h>
int omitt(char *);
int main(){
    char sen[300];
    puts("Enter: ");
    gets(sen);

    for(int i=0; sen[i+2]!='\0'; i++)   //runs till we react to last second element, since for getting "the" we need three character
        if((sen[i]=='T'||sen[i]=='t') && sen[i+1]=='h' && sen[i+2]=='e' && (sen[i+3]==' '||sen[i+3]=='\0')){    //checks if the is present as a individual intity (don't consider word like then) or not 
            omitt(&sen[i]);
            i--;    //reduce the counter, since the entity got changed and there is some probability of it to be word "the"
                    //and reducing counter rechecks the index i
        }
    
    puts(sen);
}

int omitt(char *val){
    if(*(val+3)=='\0'){ //if the is present in the end we cant put fourth element value since it don't exists
            *val=*(val+3);  //hence to end string we put null characte int index storing t
            return 0;   //then end the function since string ended
        }
    while(*(val+3)!='\0'){  //if the is present in between or in start
        *val=*(val+4);
        val++;
    }
    return 0;
}