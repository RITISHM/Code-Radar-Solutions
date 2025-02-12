#include<stdio.h>
void main(){
    int num,r=1;
    scanf("%d",&num);
    for (int i=0;i<n/2;i++){
        if (num%i==0){
            r=!r;
            break;
        }
    }
    if(r){
        printf("Prime");}
    
    else{printf("Not Prime");}
    
    }