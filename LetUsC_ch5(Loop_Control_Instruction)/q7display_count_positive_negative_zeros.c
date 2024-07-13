/*Write a program to enter numbers till the user wants. At the end it 
should display the count of positive, negative and zeros entered.*/
#include <stdio.h>

int main() {
     int num, p_num=0, n_num=0, z_num=0;
     printf("Enter numbers (to stop enter any character other than number): ");
     while(scanf("%d", &num)){
        if(num<0)
            n_num++;
        else if (num>0)
            p_num++;
        else if (num==0)
            z_num++;
     }
     printf("The count of \n\tPositive number = %d\n\tNegative number = %d\n\tZero = %d", p_num, n_num, z_num);
     return 0;
}