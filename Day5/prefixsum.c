#include<stdio.h>
int subarraysum(int arr[],int n,int start,int end){
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for(int i=1;i<n;i++){
        prefixSum[i]= prefixSum[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d",prefixSum[i]);
    }
    int sum = prefixSum[end] - prefixSum[start-1];
    return sum;
}
int main(){
    int n,k,start,end;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the starting and ending index of the subarray you want the sum");
    scanf("%d",&start);
    scanf("%d",&end);
    printf("The sum of subarray is %d",subarraysum(arr,n,start,end));
    return 0;
}