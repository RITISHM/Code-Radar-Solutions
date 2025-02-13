#include<stdio.h>
void main(){
    int l;
    scanf("%d",&l);
    int b=l-1;
    for (int i=0; i<l;i++){
        if (i==0||i==l){
            for (int j=0; j<l;j++){
            printf("*");
            }
        }
        else{

            for (int j=0; j<l;j++){
                    if (j==0||j==l){
                    printf("*");
                    }
                    else{
                        printf(" ");
                    }
            }
        }
    printf("\n");
}}