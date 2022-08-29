#include <stdio.h>

int main(){
    int prev = 0,n,sort = 1;
    scanf("%d",&prev);
    do{
        scanf("%d",&n);
        if(n < prev) sort = 0;
        prev = n;
    }while(n != 999);
    if(sort) printf("YES");
    else printf("NO");
    return 0;
}
