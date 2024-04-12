/*Create a structure to specify data of customers in a bank. The data
to be stored is: Account number, Name, Balance in account.
Assume maximum of 200 customers in the bank.
(1) Write a function to print the Account number and name of
each customer with balance below Rs. 100.
(2) If a customer requests for withdrawal or deposit, the form
contains the fields:
Acct. no, amount, code (1 for deposit, 0 for withdrawal)
Write a program to give a message, “The balance is insufficient
for the specified withdrawal”, if on withdrawal the balance falls
below Rs. 100.*/

#include <stdio.h>
#include <conio.h>
struct data{
    int acc_no;
    char name[50];
    int balance;
} cstmr[200];

void prnt_lbal(int size);
int chbal(int i);
int iof_ano(int ano, int s);

int main(){
    int i, anum, amt, code, j;
    char ans;
    printf("Enter details (Account number, Name and Balance) of Customer (Enter 'no' to stop entering): \n");
    for (i=0; ;i++){
        printf(">");
        if(!scanf("%d%s%d", &cstmr[i].acc_no, &cstmr[i].name, &cstmr[i].balance))
            break;
    }
    prnt_lbal(i);
    fflush(stdin);
    printf("\n\nDo you want to request for withdrawl or deposit?\nEnter 'y' or 'n': ");
    scanf("%c", &ans);
    if(ans=='y'|| ans=='Y'){
        printf("\n\n-------------FORM------------");
        printf("\nEnter Account number: ");
        scanf("%d", &anum);
        printf("Enter amount: ");
        scanf("%d", &amt);
        printf("Enter code (1 for deposit and 0 for withdrawl): ");
        scanf("%d", &code);
        j=iof_ano(anum, i);
        if(code==0 && chbal(j))
            printf("\nThe balance is insufficient for the specified withdrawal");
    }
}

int chbal(int i){
    if(cstmr[i].balance<100){
        return 1;
    }
    return 0;
}

void prnt_lbal(int size){
    printf("\nlist of customer having balance less than 100.");
    for(int i=0; i<size; i++)
        if(chbal(i))
            printf("\n\tAccount Number: %d\tName: %s", cstmr[i].acc_no, cstmr[i].name);
}

int iof_ano(int ano, int s){
    for (int i=0; i<s; i++){
        if(cstmr[i].acc_no==ano){
            return i;
        }
    }
}