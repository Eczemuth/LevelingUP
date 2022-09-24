#include <stdio.h>

int main(){
    int prev,n,sort = 0,count = 0,less = -1;
    scanf("%d",&prev);
    do{
        scanf("%d",&n);
        if(n == 999) break;

        if(less == -1 && n < prev) less = 1;
        else if(less == -1 && n > prev) less = 0;

        if(less && n < prev) sort += 1;
        else if(!less && n > prev) sort += 1;

        prev = n;
        count += 1;
    }while(1);
    if(count == sort) printf("YES");
    else printf("NO");
    return 0;
}
