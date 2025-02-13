#include<stdio.h>
void main(){
    int l;
    scanf("%d",&l);
    int b=l-1;
    for (int i=0; i<2*l-1;i++){
        for (int j=i; j>0;j--){
            for (int z=0;z<b,z++){
                printf(" ");
                }
            printf("*");
        }
        printf("\n");
}}