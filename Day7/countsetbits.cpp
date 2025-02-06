#include<bits/stdc++.h>
int countSetBits(int n){
    int res = 0;
    while(n!=0){
        res++;
        n= n&(n-1);
    }
    return res;
}
using namespace std;
int main(){
    int n;
    cin>>n;
    if(countSetBits(n)){
        cout<<"The number of set bits are "<<countSetBits(n)<<endl;
    }
    else{
        cout<<"No bits are set";
    }
    return 0;
}