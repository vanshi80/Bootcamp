#include<bits/stdc++.h>     
// #include<algorithm> for sort function and to sort a vector array we require to give sort(arr.begin(),arr.end()); 
using namespace std;
int minDiff(int arr[],int n,int m){
    if(m>n) return -1;
    sort(arr,arr+n);
    int res = arr[m-1]-arr[0];
    for(int i=0;(i+m-1)<n;i++){
        res = min(res,arr[i+m-1]-arr[i]);
    } 
    return res;
}
int main(){
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    int res = minDiff(arr,n,m);
    if(res==-1){
        cout<<"Distribution not possible";
    }
    else {
        cout<<"The minimum differece is"<<res;
    }
    return 0;
}