#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main() {
    bool result=false;
    long a;
    long b=pow(2,31)+1;
    scanf("%ld",&a);
    result= a>=b && a>0 || a<=b&&a<0;
    if (result){
    printf("Set");
    }
    else{
        printf("Not Set");
        }
     return 0;
}