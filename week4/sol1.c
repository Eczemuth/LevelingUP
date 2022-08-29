#include <stdio.h>

int main(){
    int prev,n,sort = 1,count = 0;
    scanf("%d",&prev);
    count += 1;
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
