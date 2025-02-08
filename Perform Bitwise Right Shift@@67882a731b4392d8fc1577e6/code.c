#include <stdio.h>


int main() {
    int result=0;
    int a,b;
    scanf("%d %d",&a,&b);
    result= a>>b;
    printf("%d",result);
     return 0;
}