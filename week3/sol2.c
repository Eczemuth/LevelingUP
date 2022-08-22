#include <stdio.h>

int main(){
    int n;

    scanf("%d",&n);

    for(int i = 1;i <= n*n;i++){
        if(i < n || i > n*n - n || i%n == 0 || (i-1)%n == 0){
            printf("*");
            if(i%n == 0) printf("\n");
        }
        else printf(" ");
    }
    
    return 0;
}
