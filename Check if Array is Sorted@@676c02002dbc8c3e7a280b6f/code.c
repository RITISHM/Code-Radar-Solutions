#include <stdio.h>
int main (){
    int size,key=1;
    scanf("%d",&size);
    int arr[size],arr1[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0; i<size-1;i++){
        if (arr[i]>arr[i+1]){
            key=0;
            break;
        }
        
    }
    if (key){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
return 0;
}                                                                                                         
