#include <stdio.h>
#include <stdlib.h>
char placed[9] = {'1','2','3','4','5','6','7','8','9'};
char og[9] = {'1','2','3','4','5','6','7','8','9'};
char mark[2] = {'X','O'};
int po;
int state;
int win = 0;
int left = 9;
int player = 0;
int same = 0;
void create(){
//create board
printf("\t\t   |   |   \n");
printf("\t\t %c | %c | %c \n",placed[0],placed[1],placed[2]);
printf("\t\t   |   |   \n");
printf("\t\t-----------\n");
printf("\t\t   |   |   \n");
printf("\t\t %c | %c | %c \n",placed[3],placed[4],placed[5]);
printf("\t\t   |   |   \n");
printf("\t\t-----------\n");
printf("\t\t   |   |   \n");
printf("\t\t %c | %c | %c \n",placed[6],placed[7],placed[8]);
printf("\t\t   |   |   \n\n");
}
void play(){
    //lets each player choose their choice
    do{
        printf("\t==============================\n");
        printf("\t      Player %d (%c) Turn      \n",player%2+1,mark[player%2]);
        printf("\t==============================\n");
        printf("\tWhere do you want to place : "); scanf("%d",&po);
        printf("\t==========================\n");
        state = 1;
        if( placed[po-1] == 'X' || placed[po-1] == 'O' || po > 9 || po < 1){
            system("cls");
            create();
            printf("\t  Choose Another Place!!\n");
        }else{
            placed[po-1] = mark[player%2];
            system("cls");
            left--;
            check();
            player++;
            state = 0;
        }
    }while(state == 1);
}
void check(){
    //check if someone win with horizontal mark
    for(int i = 0;i <= 6;i+=3){
        if(placed[i] == placed[i+1] && placed[i] == placed[i+2]){
            win = 1;
        }
    }
    //check if someone win with verticle mark
    for(int i = 0;i <= 3;i++){
        if(placed[i] == placed[i+3] && placed[i] == placed[i+6]){
            win = 1;
        }
    }
    //check if someone win with cross mark
    if(placed[0] == placed[4] && placed[0] == placed[8]
    || placed[2] == placed[4] && placed[2] == placed[6]){
        win = 1;
    }
    //if someone win show winner and exit
    if(win == 1){
        create();
        printf("\n\t  The Winner Is Player %d(%c)!\n",player%2+1,mark[player%2]);
        exit(1);
    }
    //if no place left show tie and exit
    if(left == 0){
        create();
        printf("\n\t\t     Tie\n");
        exit(1);
    }
}
int main(){
    //loop till find the winner or the board is full
    while(1){
        create();
        play();
    }
}
