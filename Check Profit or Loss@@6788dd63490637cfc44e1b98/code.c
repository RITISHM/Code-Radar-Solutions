#include<stdio.h>

int main(){
    int a,b;
    char c[20];
    scanf("%d %d",&a,&b);
    c=((b-a)>0)?"Profit":(((b-a)<0)?"Loss":"No Profit No Loss");
    printf("%s",c);
    return 0 ;
}