#include<stdio.h>
void main(){
    int l;
    scanf("%d",&l);
    for (int i=1; i<=l;i++){
        for (int j=l-i; j>0;j--){
            printf(" ");
        }

        for (int j=1; j<=i*2-1;j++){
            printf("*");
        }
       
        printf("\n");
}}