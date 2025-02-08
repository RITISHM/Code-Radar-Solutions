#include <stdio.h>
#include<stdbool.h>

int main() {
    bool result=false;
    int a;
    scanf("%d",&a);
    result= a>0;
    if (!result) {
        printf("True");
    } else {
        printf("False");
    }
     return 0;
}