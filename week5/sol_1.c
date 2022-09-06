#include <stdio.h>

int max(int,int);

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",max(n,m));
    return 0;
}

int max(int a,int b){
    if(a >= b) return a;
    return b;
}