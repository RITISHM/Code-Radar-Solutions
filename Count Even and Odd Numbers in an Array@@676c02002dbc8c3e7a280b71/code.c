#include <stdio.h>
int main (){
    int size,odd=even=0;
    scanf("%d",&size);
    int arr[size],arr1[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<size;i++){
        if (arr[i]%2){
            odd++;
        }
        else{
            even++;
        }
    }
    printf("%d %d",even,odd);
   
}                                                                                                         


