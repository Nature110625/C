#include <stdio.h>
int ck_sq(int p[9][9]);
int ck_r(int p[9][9]);
int ck_c(int p[9][9]);
int main(){
    int sq, r, c;
    //given data
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
    if(sq && r && c)    //all functions return true
        printf("Suduko is solved correctly.");
    else
        printf("Suduko is not solved correctly.");              
}

//check the 3x3 matrices 
int ck_sq(int p[9][9]){
    int sum_dg=0, count_sq=0;
    for(int i=0; i<9; i+=3)     //for the row of first element of 3x3 matrix
        for(int j=0; j<9; j+=3){    //for the column of first element of 3x3 matrix
            sum_dg=0;               //initialized to zero before checking each 3x3 matrices
            for(int m=1; m<10; m++) //for comparing each element to digits from 1 to 9
                for(int k=i; k<i+3; k++)    //for row of 3x3 matrix
                    for(int l=j; l<j+3; l++)    //for column of 3x3 matrix
                        if(p[k][l]==m)      //sum is more umique than count
                            sum_dg+=m;      // add only if value in matrix is digit from 1 to 9
            if(sum_dg==45)                  // if any digit from 1 to 9 will be missing or repeated sum_dg will have diff value 
                count_sq++;                 //count the no. of sq having all digits from 1 to 9
        }
    if(count_sq==9)     //if all nine 3x3 matrices have all digits from 1 to 9
        return 1;
    return 0;
}

//check row
int ck_r(int p[9][9]){
    int sum_dg=0, count_r=0;
    //divides 9x9 2-d array into nine 1-d matrix of size 9 row wise
    for(int i=0; i<9; i++){ //index of row to make 1-d array
        sum_dg=0;
        for(int k=1; k<10; k++) //for comparing elements of 1-d array formed to digits from 1 to 9
            for(int j=0; j<9; j++)  //for index of 1-d array formed
                if(p[i][j]==k)
                    sum_dg+=k;
        if(sum_dg==45)  //count the no. of 1-d array having all digits from 1 to 9
            count_r++;
    }
    if(count_r==9)  // if all the 9 1-d array have all digits from 1 to 9
        return 1;
    return 0;
}

//check column
int ck_c(int p[9][9]){
    int sum_dg=0, count_c=0;
    //divides 9x9 2-d array into nine 1-d matrix of size 9 column wise
    for(int i=0; i<9; i++){ //index of column that will make 1-d array
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