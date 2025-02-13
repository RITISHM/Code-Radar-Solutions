#include<stdio.h>
void main(){
    int l;
    scanf("%d",&l);
    int b=l-1;

    for (int i=1; i<l;i++){
        for (int z=0;z<=b;z++){
                printf(" ");
                }

        for (int j=1; j<=2*i-1;j++){
            printf("*");
        }
        b--;
        printf("\n");
}}