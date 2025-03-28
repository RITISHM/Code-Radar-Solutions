int main (){
    int n,max=-1;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for (int i=1;i<n;i++){
        if (arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            max=arr[i];
            break;
        }
    }
    printf("%d",max);
}