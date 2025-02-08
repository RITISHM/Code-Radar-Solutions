#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main() {
    bool result=False;
    long a;
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