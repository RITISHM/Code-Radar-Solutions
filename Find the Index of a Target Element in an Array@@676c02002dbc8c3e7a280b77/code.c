#include <stdio.h>
int main (){
    int size,index=-1,key;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
     scanf("%d",&key);
   
    for (int i=0;i<size;i++){
        if(arr[i]==key){
            index=i;
            break;
        }
      
       }
       
   }

   
    printf("%d",index);

 
}                                                                                                         
