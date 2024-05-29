/* A stack is a data structure in which addition of new element or
deletion of existing element always takes place at the same end
known as ‘top’ of stack. Write a program to implement a stack using
a linked list.
*/
#include <stdio.h>
#include <stdlib.h>
#define GETADDRESS (struct linked *)malloc(sizeof(struct linked))   //macro for creating new node

struct linked{
    int data;
    struct linked *link;
};

void display(struct linked *h);     //displays linked list

int main(){
    int num, i=0;
    struct linked *head=NULL, *previous=NULL, *current=NULL;

    //creates linked list
    printf("Create your linked linked list. Enter 'exit' to stop entering. \n> ");
    
    while(scanf("%d", &num)){   //takes entry while number is entered
        current=GETADDRESS;     //stores new node address
        if(i==0){   //if itis first entry value get stored in head
            head=current;
            head->data=num;
            head->link=NULL;
        }
        else{   //else value get stored at the adress stored in the link of previous node
            previous->link=current;
            previous->link->data=num;
            previous->link->link=NULL;
        }
        previous=current;   //in ending of each loop current node becomes previous 
        i++;
        printf("> ");
    }
    //displays linked list before implementing stack
    display(head);

    struct linked *h;
    fflush(stdin);  //flushes any extra character stored in buffer
    printf("\n\nThis is a menu driven program. \nEnter '1' to push and '2' to pop and 'exit' to stop program: ");
    while(scanf("%d", &i)){
        if(i==1){   //last  element entered is stored in previous while creating linked list, hence new node is added using this fact
            printf("Enter the number you want to push: ");
            scanf("%d", &num);
            current=GETADDRESS;
            previous->link=current;
            current->data=num;
            current->link=NULL;
            previous=current;
            display(head);
        }
        else if(i==2){
            //finds second last element and make it last
            for(h=head; h->link->link!=NULL; h=h->link);
            h->link=NULL;
            previous=h;
            display(head);
        }
        printf("\n\nEnter '1' to push and '2' to pop and 'exit' to stop program: ");
    }
}

void display(struct linked *h){
    printf("\nLinked List\n");
    while(h!=NULL){
        printf("%d ", h->data);
        h=h->link;
    }
}