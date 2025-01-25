#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    scanf("%c", a);
    if( a=="A" || a=="E" || a=="I" || a=="O" || a=="U"){
        printf("Vowel");
    }
    else if( (a>=0) && (a<=9)){
        printf("Digit");
    } 
    else if(!isalnum(a)){
        printf("Special Character");
    }
    else{
        printf("Consonant");
    }
    return 0;
}