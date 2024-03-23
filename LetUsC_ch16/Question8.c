/*Write a program to count the number of occurrences of any two
vowels in succession in a line of text. For example, in the following
sentence:
“Please read this application and give me gratuity”
such occurrences are ea, ea, ui.*/
#include<stdio.h>
int main(){
    char text[100];
    int count=0;
    printf("Enter a sentence: ");
    gets(text);
    for(int i=0; text[i]!='\0'; i++){
        if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u'||text[i]=='A'||text[i]=='E'||text[i]=='I'||text[i]=='O'||text[i]=='U')
            if(text[i+1]=='a'||text[i+1]=='e'||text[i+1]=='i'||text[i+1]=='o'||text[i+1]=='u'||text[i+1]=='A'||text[i+1]=='E'||text[i+1]=='I'||text[i+1]=='O'||text[i+1]=='U'){
                printf("%c %c\n", text[i], text[i+1]);
                count++;
            }
    }
    printf("The count of the number of occurrences of any two vowels in succession in given line of text = %d", count);
}