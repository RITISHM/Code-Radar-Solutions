#include <stdio.h>
#include<stdbool.h>

int main() {
    bool result=false;
    int a,b;
    scanf("%d %d",&a,&b);
    result= a>0 || b>0;
    if (result) {
        printf("True");
    } else {
        printf("False");
    }
     return 0;
}