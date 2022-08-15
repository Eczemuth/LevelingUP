#include <stdio.h>

int main(){
    int n,length = 1,prev_length;
    // lenght is lenght of a line, prev lenght is use to save the old lenght
    scanf("%d",&n);
    // save the old lenght
    prev_length = length;
    // in put n gives (n*(n+1))/2 '*' in total
    for(int i = 0;i < (n*(n+1))/2;i++){
        // if length still exist printf '*' and decrease length by one
        if(length > 0){
            printf("*");
            length -= 1;
        }
        // if length is zero caculate new length and new prev_lenth then print new line
        if(length == 0){
            length = prev_length+1;
            prev_length = length;
            printf("\n");
        }
    }
    return 0;
}
