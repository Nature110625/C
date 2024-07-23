/* Write a menu driven program which has following options: 
1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit
Once a menu item is selected the appropriate action should be
taken and once this action is finished, the menu should reappear.
unless the user selects the 'Exit' option the program should
continue to run.*/
#include <stdio.h>
int fac(int n){
    if(n==1)
        return n;
    return (n*fac(n-1));    //can't use n--, --n or n-=1. Also can't decreement n before return
}
int prime(int n){
    for(int i=n-1; i>1; i--)
        if(n%i==0)
            return 0;
    return 1;
}
int eoo(int n){
    if(n%2==0)
        return 1;
    return 0;
}
int main(){
    int num, ans;
    printf("This is a menu driven program. Your menu's are: \n1. Factorial of a number\n2. Prime or not\n3. Odd or even\n4. Exit");
    printf("\nEnter the number preceeding the menue option you want to perform: ");
    while(scanf("%d", &num)){
        switch(num){
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                ans=fac(num);
                printf("Factorial of %d is %d", num, ans);
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                if(prime(num))
                    printf("The number %d is a prime number.", num);
                else
                    printf("The number %d is not a prime number.", num);
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                if(eoo(num))
                    printf("The number %d is an even number.", num);
                else
                    printf("The number %d is an odd number.", num);
                break;
            case 4:
                printf("Exit successful.");
                return 0;
                break;
            default:
                printf("\nInvalid menu option.");
        }
        printf("\n\nThis is a menu driven program. Your menu's are: \n1. Factorial of a number\n2. Prime or not\n3. Odd or even\n4. Exit");
        printf("\nEnter the number preceeding the menue option you want to perform: ");
    }
}