#include<stdio.h>
void reversearray(int arr[],int n){
    int low =0,end = n-1;
    while(low<=end){
        int temp = arr[low];
        arr[low] = arr[end];
        arr[end] = temp;
        low++;
        end--;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array is here");
    reversearray(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}