#include<bits/stdc++.h>
using namespace std;
int raiwatertrapping(int arr[],int n){
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n;i++){
       lmax[i]=max(arr[i],lmax[i-1]);
    }
    rmax[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(rmax[i+1],arr[i]);
    }
    int res = 0;
    for(int i=0;i<n;i++){
        res+=(min(lmax[i],rmax[i])-arr[i]);
    }
    // for(int i=0;i<n;i++){
    //     cout<<rmax[i]<<" ";
    // }
    return res;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The raiwater trapped is "<<raiwatertrapping(arr,n)<<"units"<<endl;
    return 0;
}