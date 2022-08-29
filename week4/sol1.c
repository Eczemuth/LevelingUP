#include <stdio.h>

int main(){
    int prev,n,sort = 1,count = 1;
    scanf("%d",&prev);
    do{
        scanf("%d",&n);
        if(n > prev) sort += 1;
        prev = n;
        count += 1;
    }while(n != 999);
    if(count == sort) printf("YES");
    else printf("NO");
    return 0;
}
