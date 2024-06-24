/*Consider a currency system in which there are notes of seven
denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If
a sum of Rs. N is entered through the keyboard, write a program to
compute the smallest number of notes that will combine to give Rs. N.*/
#include <stdio.h>

int main() {
    int tmny, n_hndrd, n_fft, n_tn, n_fiv, n_two, n_one, t_no;
    printf("Enter the amount: ");
    scanf("%d", &tmny);
    //first, did float division to get no.of 100 present. since it is largest entity and hence will reduce no. of notes
    n_hndrd=tmny/100;
    tmny=tmny-n_hndrd*100;
    //after removing all hundred's , did float division to get no. of 50 present and so on...
    n_fft=tmny/50;
    tmny=tmny-n_fft*50;
    n_tn=tmny/10;
    tmny=tmny-n_tn*10;
    n_fiv=tmny/5;
    tmny=tmny-n_fiv*5;
    n_two=tmny/2;
    tmny=tmny-n_two*2;
    n_one=tmny/1;
    t_no=n_hndrd+n_fft+n_tn+n_fiv+n_two+n_one;
    printf("smallest number of notes = %d\n",t_no);
    printf("\n%d 100 rupee note. \n%d 50 rupee note. \n%d 10 rupee note. \n%d 5 rupee note. \n%d 2 rupee note. \n%d 1 rupee note.", n_hndrd, n_fft, n_tn, n_fiv, n_two, n_one);
    return 0;
}