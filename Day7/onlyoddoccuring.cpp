#include<bits/stdc++.h>
using namespace std;
int onlyoddoccuring(int arr[],int n){
    int x = 0;
    for(int i=0;i<n;i++){
        x = x^arr[i];
    }
    return x;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(onlyoddoccuring(arr,n)){
        cout<<"The only odd occuring number is "<<onlyoddoccuring(arr,n)<<endl;
    }
    else {
        cout<<"There is no odd occuring number in array"<<endl;
    }
    return 0;
}