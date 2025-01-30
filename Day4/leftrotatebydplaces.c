#include<stdio.h>
void reverse(int arr[],int low,int high){
    while(low<=high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}
void leftrotatebyd(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int d;
    printf("Enter the value for whihc you want to rotate");
    scanf("%d",&d);
    leftrotatebyd(arr,n,d);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}