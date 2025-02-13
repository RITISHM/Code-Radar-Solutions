#include<stdio.h>
void main(){
    int l;
    scanf("%d",&l);
    int b=l-1;
    for (int i=0; i<l;i++){
        for (int z=0;z<=b;z++){
                printf(" ");
                }

        for (int j=0; j<2*l-1;j++){
            printf("*");
        }
        b--;
        printf("\n");
}}