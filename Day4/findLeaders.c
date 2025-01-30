#include<stdio.h>
void findLeaders(int arr[],int n){
    int leader = arr[n-1];
    int flag =1;
    printf("%d ",leader);
    for(int i=n-2;i>0;i--){
        if(arr[i]>leader){
            leader = arr[i];
            printf("%d ",leader);
        }
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    findLeaders(arr,n);

    return 0;
}