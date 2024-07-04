/* Define two functions xgets() and xputs() which work similar to the 
standard library functions gets() and puts()*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

void xgets(char *a);
void xputs(char *a);

int main(){
    char name[50];
    puts("Enter your name");
    xgets(name);
    xputs(name);
}

void xgets(char *a){
    //this loop will take entry through getch() till enter key is not pressed
    while(1){
        int val=getch();    //getch return ASCII value of number, alphabets, special characters, backspace key, enter key, and space key
        
        if(val==13){    //break the loop when enter key is pressed
            break;      //ASCII value of enter key is 10 but when enter key is pressed it returns ASCII value of carriage return i.e 13
        }
        else if(val==224)   //The up, right, down, left arrow keys ASCII value consists of two values that are respectively 244-72, 244-77, 244-80, 244-75
            getch();        // This block eat up the entry of arrow keys and arrow key acts only as navigator on terminal not as a character
        else if(val==8){    // The ASCII value of backspace is 8, when backspace is clicked 
            printf("\b");   //The backspace escape character shifts cursor to left by one column
            a--;            // and the pointer is decreemented to point previous address, to update the value according to user
        }
        else{                       //This block takes entry of character in character array, since all key other than character are taken care of
            printf("%c", val);      //This prints all character that is typed by user for them to know what they typed
                                    //we did not use getche() since we don't want to type all key entered by user but all character entered by user
            sprintf(a, "%c", val);  //There is no need to add null character manually, apparently sprintf do it for us.
            a++;
        }  
    }
    
}

void xputs(char *a){    //JUST PRINT ALL THE CHARACTER STORED IN CHARACTER ARRAY
    for ( ; *a!='\0'; a++){
        printf("%c", *a);
    }
}