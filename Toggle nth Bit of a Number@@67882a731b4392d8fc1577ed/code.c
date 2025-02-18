#include <stdio.h>
#include <math.h>

int main() {
    int a, b,r=1;
    scanf("%d %d",&a,&b);
    for (int i=1;i<=b;i++){
        r*=2;
  }
    a=a^r;
    printf("%d",a);

    return 0;
}