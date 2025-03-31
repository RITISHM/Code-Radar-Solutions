#include <stdio.h>
int main (){
    int size,key;
    scanf("%d",&size);
    int arr[size],arr1[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&key);
    for (int i=size-1;i>=key;i--){
        if (i-key){
            arr1[i+key]=arr[i];
        }
    }

    for (int i=0;i<key;i++){
        arr1[size-key+i]=arr[i];
    }
    for (int i=0;i<size;i++){
        printf("%d\n",arr1[i]);

    }
}                                                                                                         


rotate wala question