#include<stdio.h>
int secondlargest(int arr[],int n){
    int res = -1,largest = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest]){
            if(res == -1|| arr[res]<arr[i]){
                res = i;
            }
        }
    }
    return res;
}
int main(){
    int arr[6] = {1,4,6,8,10,11};
    int n = 6;
    printf("The second largest element is at index: %d and is :%d ",secondlargest(arr,n),arr[secondlargest(arr,n)]);
    return 0;
}