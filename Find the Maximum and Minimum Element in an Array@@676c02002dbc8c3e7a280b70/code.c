#include <stdio.h>
int main (){
    int size,max,min;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for (int i=0;i<size;i++){
        if (arr[i]>max){
            max=arr[i];
        }
        else if (arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d %d",min,max);
    
}                                                                                                         
