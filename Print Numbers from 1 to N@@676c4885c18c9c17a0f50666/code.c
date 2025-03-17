#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int n = 1; n <= a; n++){
        printf("%d", n);
        if (n < a){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}