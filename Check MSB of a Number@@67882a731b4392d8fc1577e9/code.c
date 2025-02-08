#include <stdio.h>
#include <math.h>
int main() {
    int result=0;
    int a;
    int b=pow(2,31);
    scanf("%d ",&a);
    result= a>=b;
    if (result){
    printf("Set");
    }
    else{
        printf("Not Set");
        }
     return 0;
}