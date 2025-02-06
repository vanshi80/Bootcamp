#include<bits/stdc++.h>
using namespace std;
int findpair(int arr[],int n,int sum,int start_indx){
    int low =start_indx;
    int high = n-1;
    while(low<high){
        if(arr[low]+arr[high]>sum){
            high--;
        }
        else if(arr[low]+arr[high]<sum){
            low++;
        }
        else{
            return 1;
        }
    }
    return 0;
}
int findtriplet(int arr[],int n,int x){
    sort(arr,arr+n);
    int tripletcount = 0;
    for(int i=0;i<n-2;i++){
        int res = findpair(arr,n,x-arr[i],i+1);
        if(res!=0){
            tripletcount++;
            // cout<<tripletcount<<endl;
        }
    }
    return tripletcount;
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
    int res = findtriplet(arr,n,x);
    cout<<res;
    if(res){
        cout<<"The triplet is found"<<res<<"times"<<endl;
    }
    else{
        cout<<"No triplet is found";
    }

    return 0;
}