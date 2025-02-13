#include<stdio.h>
void main(){
    int l;
    scanf("%d",&l);

    for (int i=0; i<l;i++){
        for (int j=0; j<i;j++){
            printf("* ");
        }
        printf("\n");
}}