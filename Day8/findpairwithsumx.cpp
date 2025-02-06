#include<bits/stdc++.h>
using namespace std;
void findpairwithsumx(int arr[], int n,int x){
    sort(arr,arr+n);
    int low = 0;
    int high = n-1;
    while(low<high){
        if(arr[low]+arr[high]>x){
            high--;
        }
        else if(arr[low]+arr[high]<x){
            low++;
        }
        else{
            break;
        }
    }
    cout<<arr[low]<<","<<arr[high]<<endl;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    findpairwithsumx(arr,n,x);
    return 0;
}