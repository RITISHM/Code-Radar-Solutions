#include <stdio.h>
#include <math.h>

int main() {
    int a, b,r;
    scanf("%d %d",&a,&b);
    r=pow(2, b);
  
    b=a&~r;
    printf("%d",b);
    return 0;
}