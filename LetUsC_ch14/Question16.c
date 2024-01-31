#include <stdio.h>
int ck_sq(int p[9][9]);
int ck_r(int p[9][9]);
int ck_c(int p[9][9]);
int main(){
    int sq, r, c;
    int game[9][9]={
                    5, 3, 4, 6, 7, 8, 9, 1, 2,
                    6, 7, 2, 1, 9, 5, 3, 4, 8,
                    1, 9, 8, 3, 4, 2, 5, 6, 7, 
                    8, 5, 9, 7, 6, 1, 4, 2, 3,
                    4, 2, 6, 8, 5, 3, 7, 9, 1,
                    7, 1, 3, 9, 2, 4, 8, 5, 6, 
                    9, 6, 1, 5, 3, 7, 2, 8, 4,
                    2, 8, 7, 4, 1, 9, 6, 3, 5,
                    3, 4, 5, 2, 8, 6, 1, 7, 9
                    };
    sq=ck_sq(game);
    r=ck_r(game);
    c=ck_c(game);
    if(sq && r && c)
        printf("Suduko is solved correctly.");
    else
        printf("Suduko is not solved correctly.");              
}
int ck_sq(int p[9][9]){
    int sum_dg=0, count_sq=0;
    for(int i=0; i<9; i+=3)
        for(int j=0; j<9; j+=3){
            sum_dg=0;
            for(int m=1; m<10; m++)
                for(int k=i; k<i+3; k++)
                    for(int l=j; l<j+3; l++)
                        if(p[k][l]==m)
                            sum_dg+=m;
            if(sum_dg==45)
                count_sq++;
        }
    if(count_sq==9)
        return 1;
    return 0;
}
int ck_r(int p[9][9]){
    int sum_dg=0, count_r=0;
    for(int i=0; i<9; i++){
        sum_dg=0;
        for(int k=1; k<10; k++)
            for(int j=0; j<9; j++)
                if(p[i][j]==k)
                    sum_dg+=k;
        if(sum_dg==45)
            count_r++;
    }
    if(count_r==9)
        return 1;
    return 0;
}
int ck_c(int p[9][9]){
    int sum_dg=0, count_c=0;
    for(int i=0; i<9; i++){
        sum_dg=0;
        for(int k=1; k<10; k++)
            for(int j=0; j<9; j++)
                if(p[j][i]==k)
                    sum_dg+=k;
        if(sum_dg==45)
            count_c++;
    }
    if(count_c==9)
        return 1;
    return 0;
}