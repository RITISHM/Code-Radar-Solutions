#include <stdio.h>
int main (){
    int size,key=-1;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

   
    for (int i=0;i<size;i++){
        int count=0;
       for (int j=i;j<size;j++){
        if (arr[j]==arr[i]){
            count++;
        }
       }
       printf("%dc %d\n",count,arr[i]);
       if (count>size/2){
        key==arr[i];
       }
   }

   
    printf("%d",key);

 
}                                                                                                         
