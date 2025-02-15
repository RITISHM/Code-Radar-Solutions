#include<stdio.h>
void main(){
    int l;
    scanf("%d",&l);
    for (int i=l; i<=1;i--){
        for (int j=1; j<=i;j++){
            printf("%d",j);
        }
       
        printf("\n");
}}