#include<bits/stdc++.h>
using namespace std;
void printtwooddoccuringelem(int arr[],int n){
    long xorresult = 0; //because there might be very large values of the xorresult like INT_MIN and INT_Max so when we try to 
    // subtract 1 from them they do not work.
    for(int i=0;i<n;i++){
        xorresult ^= arr[i];
    }
    int setbit = xorresult & ~(xorresult - 1);
    int res1 =0,res2 = 0;
    for(int i=0;i<n;i++){
        if(arr[i]&setbit){
            res1 ^= arr[i];
        }
        else{
            res2 ^= arr[i];
        }
    }
    cout<<"The two odd occuring numbers are "<<res1<<" "<<res2<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printtwooddoccuringelem(arr,n);
    return 0;
}