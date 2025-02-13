#include<stdio.h>
void main(){
    int l;
    scanf("%d",&l);
    int b=l-1;
    for (int i=1; i<=l;i++){
        for (int j=1; j<=i;j++){
            printf("%d",j);
        }
       
        printf("\n");
}}