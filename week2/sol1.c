#include <stdio.h>

int main(){
    int n;

    scanf("%d",&n);
    // first for loop is how many lines will it print
    for(int i = 1;i <= n;i++){
        // second for loop is how long will it print per line
        for(int j = 0;j < i;j++){
            printf("*");
        }
        // when done printing this line print new line
        printf("\n");
    }
    
    return 0;
}
