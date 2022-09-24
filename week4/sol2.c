#include <stdio.h>

int main(){
    int prev = 0,n,sort = 0;
    do{
        scanf("%d",&n);
        if(n >= prev || n <= prev) sort = 1;
        prev = n;
    }while(n != 999);
    if(sort) printf("YES");
    else printf("NO");
    return 0;
}
