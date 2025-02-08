#include <stdio.h>


int main() {
    int result=0;
    int a;
    scanf("%d %d",&a);
    result= a%2;
    if (result){
    printf("Set");
    }
    else{
        printf("Not Set");
        }
     return 0;
}