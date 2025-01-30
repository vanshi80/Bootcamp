#include<stdio.h>
int max(int a,int b){
    if(a>b) return a;
    else return b;
}
int min(int a,int b){
    if(a>b) return b;
    else return a;
}
int maxdifference(int arr[],int n){
    int minValue = arr[0];
    int res = arr[1]-arr[0];
    for(int i=1;i<n;i++){
        res = max(arr[i]-minValue,res);
        minValue = min(arr[i],minValue);
    }
    return res;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The maximum difference in array is %d",maxdifference(arr,n));
    return 0;
}