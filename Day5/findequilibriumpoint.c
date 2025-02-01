#include<stdio.h>
int findequilibrium(int arr[],int n){
    int prefixSum[n],suffixSum[n];
    prefixSum[0] = arr[0];
    for(int i=1;i<n;i++){
        prefixSum[i]= prefixSum[i-1]+arr[i];
    }
    suffixSum[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        suffixSum[i]= suffixSum[i+1]+arr[i];
    }
    for(int i=1;i<n;i++){
        if(prefixSum[i-1]==suffixSum[i+1]){
            return i;
        }
    }
    return -1;

}
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(findequilibrium(arr,n)!=-1) printf("The equilibrium point is %d",findequilibrium(arr,n));
    else printf("No point found");
    return 0;
    
}