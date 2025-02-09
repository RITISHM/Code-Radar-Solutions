#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);
    if (!(num%5)&&!(num%11)){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}