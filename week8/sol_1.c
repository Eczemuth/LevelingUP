#include <stdio.h>

int main(){
    unsigned long long int board = 0b1111111111111111111111111111111111111111111111111111111111111111;
    long long int row   = 0b0000000000000000000000000000000000000000000000000000000011111111;
    long long int col   = 0b0000000100000001000000010000000100000001000000010000000100000001;

    int n,x,y,count = 0;

    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d %d",&y,&x);
        board = board& ~(row<<8*(y-1));
        board = board& ~(col<<(x-1));
    }
    for(int i = 0;i<64;i++){
        count += board&1;
        board = board>>1;
    }   
    printf("%d",count);

    return 0;
}

