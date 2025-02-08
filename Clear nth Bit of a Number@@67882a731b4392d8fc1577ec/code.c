#include <stdio.h>
#include <math.h>

int main() {
    int a, b,r;
    scanf("%d %d",&a,&b);
    r=pow(2,b);
  
    a=a&~r;
    printf("%d",a);
    return 0;
}