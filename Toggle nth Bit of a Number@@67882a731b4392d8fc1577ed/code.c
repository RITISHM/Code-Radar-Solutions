#include <stdio.h>
#include <math.h>

int main() {
    int a, b,c;
    scanf("%d %d",&a,&b);
    if (b>0)
    c=pow(2,b);
    if   ((a>>b)%2){
    a=a&~c;
    printf("%d",a);
}
    else{
      a=a|c; 
      printf("%d",a);
    }
    return 0;
}