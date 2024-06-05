/*
Write a program to implement an ascending order linked list. This
means that any new element that is added to the linked list gets 
inserted at a place in the linked list such that its ascending order
nature remains intact.
*/
#include <stdio.h>
#include <stdlib.h>
#define GETADDRESS (struct linked *)malloc(sizeof(struct linked))

struct linked {
    int data;
    struct linked *link;
};

//add element in linked list in ascending order
int arrng_asc(struct linked **head, int val){   //take address of address of pointer storing head node  
    struct linked *h=*head, *test;     
    for(int i=0; h!=NULL ; i++){        // loops through all node
        if(i==0){       //if it is first loop i.e, first node
            if (h->data>val){   // if the node's data is greater than vlaue to be added
                //change head node by creating a new node and saving its address at the address of pointer storing head node  
                test=h;
                *head=GETADDRESS;
                (*head)->link=test;
                (*head)->data=val;
                return 0;
            }
        }
        else{   //executes if it's not first loop
            if((h)->link==NULL && (h)->data<val){   //executes if node is last element and value stored in it is less than the value of node to be added
                //added node becomes new last node
                (h)->link=GETADDRESS;
                (h)->link->data=val;
                (h)->link->link=NULL;
                return 0;
            }
            else if((h)->link->data >=val){ //can execute for all node other than last node and first node, if its value is greater than value to be stored
                test=(h)->link;
                (h)->link=GETADDRESS;
                (h)->link->data=val;
                (h)->link->link=test;
                return 0;
            }
            h=h->link; //attention, pinter h gets upgraded only when else block get executed
        }
    }
}

//displays all the element of linked list withe the help of head of linked list
void display(struct linked *h){
    printf("\nYour linked list: \n");
    while(h!=NULL){
        printf("%d ", h->data);
        h=h->link;
    }
}

int main(){
    int val, i=0;
    struct linked *head, *test;
    printf("This is a menu driven program for linked list that stores data in ascending order. \nEnter 1 to add element, '2' to show list and 'exit' to stop program: ");
    while(scanf("%d", &val)){
        if(val==1){ //code block if user choosed to add in linked list
            printf("\nEnter the value you want to add: ");
            scanf("%d", &val);
            if(i==0){   // first node gets added here
                head=GETADDRESS;
                head->data=val;
                head->link=NULL;
            }
            else{   //all other node gets added in arrng_asc function
                arrng_asc(&head, val);
            }
            i++;
        }else if(val==2){   //code block if user choose to display linked list
            if(i==0){
                printf("The list is empty.");
            }
            else{
                display(head);
            }
        }
        else
            return 0;
        printf("\nEnter 1 to add element, '2' to show list and 'exit' to stop program: ");//prompts user in each while loop to choose menu options
    }
}