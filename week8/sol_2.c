#include <stdio.h>
#include <string.h>

int main(){
    int n,count = 0,x,y;
    int board[8][8];
    memset(board,0,64*4);

    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d %d",&y,&x);
        for(int j = 0;j < 8;j++){        
            if (board[j][x-1] == 0){
                board[j][x-1] = 1;
            }
        }        
        for(int k = 0;k < 8;k++){
            if(board[y-1][k] == 0){
                board[y-1][k] = 1;
            }
        }
    }
    for(int i = 0;i<8;i++){
        for(int j = 0;j < 8;j++){
            if(board[i][j] == 0){
                count += 1;
            }
        }
    }   
    printf("%d",count);

    return 0;
}

