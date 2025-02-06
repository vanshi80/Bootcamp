#include<bits/stdc++.h>
using namespace std;
int isPowerofTwo(int n){
    // must put a bracket outside  n&(n-1) like this (n&(n-1))
    return (n && ((n&(n-1))==0));
}
int main(){
    int n;
    cin>>n;
    if(isPowerofTwo(n)){
        cout<<"Its a power of two ";
    }
    else{
        cout<<"Not a power of two";
    }
    return 0;
}