#include<stdio.h>
// if we are given some vector array then arr.size() is to determine its size in c++ with vector header file
int max(int a,int b){
    if(a>b) return a;
    else return b;
}
int min(int a,int b){
    if(a>b) return b;
    else return a;
}
void sumofsubarray(int arr[],int n,int k){
    int curr=0;
    for(int i=0;i<k;i++){
        curr+=arr[i];
    }
    int res1,res2;
    res1=curr;
    res2=curr;
    for(int i=k;i<n;i++){
        curr = curr+arr[i]-arr[i-k];
        res1 = max(res1,curr);
        res2 = min(res2,curr);
    }
    printf("The maximum sum of subarray of size %d is %d\n",k,res1);
    printf("The min sum of subarray of size %d is %d\n",k,res2);
}
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the size of the subarray");
    scanf("%d",&k);
    sumofsubarray(arr,n,k);
    return 0;
}