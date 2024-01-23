#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define  UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

void box(int, int, int, int);
int check(int n[4][4]);
void action(int n[4][4]);
void gotoxy ( short col, short row );
int getkey( );
void update(int, int, int, int, int *);
void swap(int *x, int *y);
int main(){
    int i, num[4][4]={11, 3, 5, 1, 
                    2, 15, 9, 4,
                    7, 14, 6, 10,
                    8, 12, 13, 32};

    printf("\nArrange the numbes in ascending order.\nPress any key to start. . .");
    getch();
    system("cls");
    box(0, 0, 24, 8);
    update(0, 0, 24, 8, (int*)num);
    for(i=0; !check(num); i++){
            action(num);
            system("cls");
            box(0, 0, 24, 8);
            update(0, 0, 24, 8, (int*)num);
    }
    printf("You have won!!\n\tIn %d steps", i);
    return 0; 
}
void box(int x1, int y1, int x2, int y2){
    for(int i=x1; i<=x2; i++)
        for(int j=y1; j<=y2; j++){
            /*-------building corners-------*/
            if(i==x2 && j==y2){
                gotoxy(i, j);
                printf("%c", 217);
            }
            if(i==x1 && j==y1){
                gotoxy(i, j);
                printf("%c", 218);
            }
            if(i==x2 && j==y1){
                gotoxy(i, j);
                printf("%c", 191);
            }
            if(i==x1 && j==y2){
                gotoxy(i, j);
                printf("%c", 192);
            }
            /*----Building horizontal columns----*/
            if(i<x2 && i>x1){
                if(i%6==0 ){
                    if(j==y1){
                        gotoxy(i, j);
                        printf("%c", 194);  // T
                    }
                    else if(j==y2){
                        gotoxy(i, j);
                        printf("%c", 193);  //reverse T
                    }
                    else if(j%2==0){
                        gotoxy(i, j);
                        printf("%c", 197);  //+
                    }
                }
                else if(j%2==0){
                    gotoxy(i, j);
                    printf("%c", 196);  //Horizontal lines
                }
            }
            /*------Building vertical columns------*/
            if(j<y2 && j>y1){
                if(j%2==0){
                    if(i==x1){
                        gotoxy(i, j);
                        printf("%c", 195);  //Left rotated T
                    }
                    if(i==x2){
                        gotoxy(i, j);
                        printf("%c", 180);  //Right rotated T
                    }
                    
                }
                else if(i%6==0){
                    gotoxy(i, j);
                    printf("%c", 179);  //Vertical lines
                }
            }

        }
}
void update(int x1, int y1, int x2, int y2, int *n){
    int k=0;
    for(int j=0; j<y2; j++)
        for(int i=0; i<x2; i++){
            if(j%2==1 && (i+3)%6 == 0){
                gotoxy(i, j);
                if(n[k]==32)
                    printf(" ");
                else
                    printf("%d", n[k]);
                k++;
            }
        }
}
int check(int n[4][4]){
    int num=n[0][0];
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++){
            if(num>n[i][j])
            return 0;
        num=n[i][j];
        }
    return 1;
}
void action(int n[4][4]){
    int key=getkey();
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++){
            if(n[i][j]==32){
                switch(key){
                    case UP:
                        if(i>=3)
                            return;
                        swap(&n[i][j], &n[i+1][j]);
                        return;
                    case DOWN:
                        if(i<=0)
                            return;
                        swap(&n[i][j], &n[i-1][j]);
                        return;
                    case RIGHT:
                        if(j<=0)
                            return;
                        swap(&n[i][j], &n[i][j-1]);
                        return;
                    case LEFT:
                        if(j>=3)
                            return;
                        swap(&n[i][j], &n[i][j+1]);
                        return;
                }
            }
        }
}
void gotoxy ( short col, short row )
{
    HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE ) ;
    COORD position = { col, row } ;
    SetConsoleCursorPosition ( h, position ) ;
}
int getkey( )
{
    int ch ;
    ch = getch( ) ;
    if ( ch == 0 )
    {
    ch = getch( ) ;
    return ch ;
    }
    return ch ;
}
void swap(int *x, int *y){
    int num=*x;
    *x=*y;
    *y=num;
}
