#include<bits/stdc++.h>
using namespace std;
int missingNumber(int arr[],int n){
    int xor1 = 0;
    // int xor2 = 0;
    for(int i=0;i<n-1;i++){
        xor1 = xor1 ^ arr[i]^(i+1);
        // xor1 = xor1 ^ arr[i];
    }
    xor1 = xor1^n;
    // for(int i=1;i<=n;i++){
    //     xor2 = xor2^i;
    // }
    return xor1;
}
int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    cout<<"The missing number is "<<missingNumber(arr,n)<<endl;
    return 0;
}