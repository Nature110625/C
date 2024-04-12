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
struct data{
    int acc_no;
    char name[50];
    int balance;
};
void pless_bal(struct data *, int );
int main(){
    struct data coust[200];
    int no_coust;
    char ans;
    printf("Enter the data: Account number, Name and Balance (in order) \n");
    for(int i=0; i<200; i++){
        printf("coustomer %d: ", i+1);
        scanf("%d%s%d", &coust[i].acc_no, &coust[i].name, &coust[i].balance);
        fflush(stdin);
        printf("If you dont want to enter more data type 'n' else 'y': ");
        scanf("%c", &ans);
        if(ans=='n'){
            no_coust=i;
            break;
        }
    }
    printf("\n\nCoustomer with balance below Rs.100");
    pless_bal(coust, no_coust);

    int code, acc, amt;
    printf("To request withdrawal or deposit enter 'y': ");
    scanf("%c", &ans);
    if(ans=='y'){
        printf("Enter 0 to withdraw and 1 to deposit: ");
        scanf("%d", &code);
        printf("Enter account number and amount to withdraw or deposit: ");
        scanf("%d%d", &acc, &amt);
        if()
    }
}

void pless_bal(struct data *cstr, int n){
    for (int i=0; i<=n; i++){
        if(cstr[i].balance<100)
            printf("\nAccount number: %d\nName: %s", cstr[i].acc_no, cstr[i].name);
    }
}