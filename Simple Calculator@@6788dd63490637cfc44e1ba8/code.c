#include <stdio.h>

int main() {
    int a,b;
    char op;
    scanf("%d %d", &a, &b);
    scanf("%c", &op);
    if(op == '+'){
        printf(a+b);
    }
    else if(op == '-'){
        printf(a-b);
    }
    else if(op == '*'){
        printf(a*b);
    }
    else if(op == '/'){
        printf(a/b);
    }
    else{
        printf("Error");
    }
    return 0;
}