#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int alph;
    scanf("%c",&alph);
    if (alph<=90&&alph>=65){
        printf("Uppercase");
    }
    else if (alph<=122&&alph>=97){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}