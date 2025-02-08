#include <stdio.h>
#include<stdbool.h>

int main() {
    bool result=false;
    int a,b;
    scanf("%d %d",&a,&b);
    result= a>b;
    printf("%b", result);
    return 0;
}