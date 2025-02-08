#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num , pos, result;
    scanf("%d %d",&num,&pos);
    result=(num>>(pos-1))%2;
    printf("%d",result)
    
    return 0;
}