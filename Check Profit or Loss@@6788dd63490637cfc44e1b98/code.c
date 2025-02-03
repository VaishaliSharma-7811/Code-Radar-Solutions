#include <stdio.h>

int main() {
    int a,b, result;
    scanf("%d %d", &a,&b);
    result = b-a;
    if(result>0){
        printf("Profit");
    }
    else if(result<0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}