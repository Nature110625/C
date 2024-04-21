/*An automobile company has serial number for engine parts starting from AA0 to FF9.
The other characteristics of parts are yeadr of manufacture, materialand quantity manufactured.
(1)  Specify a structure to store information corresponding to a part.
(2)  Write a program to retrive information on parts with serial number between BB1 and CC6.*/
#include <stdio.h>
#include <string.h>
struct record {
        char sno[10];
        int yofmanu;
        char material[50];
        int quantity;
    };

int comp(char *, char *);
int main(){
    struct record engi_parts[360];
    int l=0;
    for (char i='A'; i<='F'; i++)
        for(char j='A'; j<='F'; j++)
            for(char k='0'; k<='9'; k++){
                engi_parts[l].sno[0]=i;
                engi_parts[l].sno[1]=j;
                engi_parts[l].sno[2]=k;
                engi_parts[l].sno[3]='\0';
                l++; 
            }

    printf("\nThe information of parts with serial numbers between BB1 and CC6: ");
    
    int flag=0;
    for(l=0; l<=360 ; l++){
        if(comp(engi_parts[l].sno, "BB1") || flag){
            printf("\nS.NO.= %s \nYear of Manufacture = %d, Material = %s, quantity = %d", engi_parts[l].sno, engi_parts[l].yofmanu, engi_parts[l].material, engi_parts[l].quantity);
            flag=1;
        }
        if(comp(engi_parts[l].sno, "CC6"))
            break;
    }
    return 0;
}
int comp(char *s, char *t){
    for(int i=0; i<4; i++){
        if(*s!=*t)
            return 0;
        s++, t++;
    }
    return 1;
}