#include <stdio.h>

int main() {
    int tmny, n_hndrd, n_fft, n_tn, n_fiv, n_two, n_one, t_no;
    printf("Enter the amount: ");
    scanf("%d", &tmny);
    n_hndrd=tmny/100;
    tmny=tmny-n_hndrd*100;
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