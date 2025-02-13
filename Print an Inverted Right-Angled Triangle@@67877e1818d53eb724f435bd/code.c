#include<stdio.h>
void main(){
    int l;
    scanf("%d",&l);

    for (int i=l; i>l;i--){
        for (int j=0; j>=i;j--){
            printf("* ");
        }
        printf("\n");
}}