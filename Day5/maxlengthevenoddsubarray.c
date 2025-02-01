#include<stdio.h>
int max(int a,int b){
    if(a>b) return a;
    else return b;
}
int maximumLengthevenoddarray(int arr[],int n){
    int res = 1;
    int curr = 1;
    for(int i=1;i<n;i++){
        if((arr[i-1]%2==0&&arr[i]%2!=0)||(arr[i]%2==0&&arr[i-1]%2!=0)){
            curr++;
            res = max(res,curr);
        }
        else{
            curr = 1;
        }
    }
    return res;
}
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The maximum length even odd subarray is %d",maximumLengthevenoddarray(arr,n));
    return 0;
}