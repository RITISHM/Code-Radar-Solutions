#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    float d;
    scanf("%d %d %d",&a,&b,&c);
    d=(a+b+c)/3;
    printf("Average: %.3f",d);
    return 0;
}