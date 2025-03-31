#include <stdio.h>
int main (){
    int size;
    scanf("%d",&size);
    int arr[size];
    int arr1[size;2];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

 
    for (int i=0;i<size;i++){
        int n=1;
        for (int j=0;j<size;j++){
            if (arr[i]==arr[j] && j>i){
                
                        arr1[i]=[arr[i] ,n+1 ];
                    }
        }
     
    }
    
    for (int i=0;i<size;i++){
        printf("%d\n",arr1[i]);

    }
}                                                                                                         

