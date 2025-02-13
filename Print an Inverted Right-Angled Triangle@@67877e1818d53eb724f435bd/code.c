#include<stdio.h>
void main(){
    int l;
    scanf("%d",&l);

    for (int i=l; i>l;i--){
        for (int j=i; j>0;j--){
            printf("* ");
        }
        printf("\n");
}}