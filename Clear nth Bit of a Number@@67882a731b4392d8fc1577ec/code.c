#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d",&a,&b);
    b=pow(2,b);
    a=a!&b;
    printf("%d",a);
    return 0;
}