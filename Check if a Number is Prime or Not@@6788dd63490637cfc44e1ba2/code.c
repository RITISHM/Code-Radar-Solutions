#include<stdio.h>
void main(){
    int num,r=1;
    scanf("%d",&num);
    for (int i=0;i<n/2;i++){
        if (num%i==0){
            r=!r;
        }
    }
    if(r==1){printf("Prime");}
    
    else{("Not Prime");}
    
    }