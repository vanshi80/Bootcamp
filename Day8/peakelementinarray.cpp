#include<bits/stdc++.h>
using namespace std;
int peakelement(int arr[],int n){
    int mid;
    int low= 0;
    int high = n-1;
    while(low<=high){
        mid = (low+high)/2; 
        if((mid == 0||arr[mid-1]<=arr[mid])&&(mid==n-1 || arr[mid+1]<=arr[mid])){
            return arr[mid];
        }
        if(mid>0 && arr[mid]<=arr[mid-1]){
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res = peakelement(arr,n);
    if(res==-1){
        cout<<"No peak element is found";
    }
    else {
        cout<<"The peak element in array is"<<res<<" ";
    }
    return 0;
}