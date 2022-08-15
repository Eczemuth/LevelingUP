#include <stdio.h>

int main(){
    int n,until = 1,prev_until;

    scanf("%d",&n);
    prev_until = until;
    for(int i = 0;i < n*n;i++){
        if(until > n) break;
        if(until > 0){
            printf("*");
            until -= 1;
        }            
        else{
            until = prev_until+1;
            prev_until = until;
            printf("\n");
        }
    }
    return 0;
}
