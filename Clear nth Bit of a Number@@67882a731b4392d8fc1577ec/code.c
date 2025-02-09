#include <stdio.h>
#include <math.h>

int main() {
    int a, b,r;
    scanf("%d %d",&a,&b);
    printf("%d",b);
    r=pow(b, 2);
  
    b=a&~r;
    printf("%d",b);
    return 0;
}