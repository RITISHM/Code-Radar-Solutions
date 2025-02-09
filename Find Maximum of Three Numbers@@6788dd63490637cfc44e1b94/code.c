#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,max,c;
    scanf("%d %d %d",&a,&b,&c);
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("%d",max);
    return 0;
}