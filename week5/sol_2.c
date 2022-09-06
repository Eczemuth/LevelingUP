#include <stdio.h>

int max(int a,int b){
     return (a >= b) ? a : b;
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",max(n,m));
    return 0;
}

