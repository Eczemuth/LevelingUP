#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(!(n&1)){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}