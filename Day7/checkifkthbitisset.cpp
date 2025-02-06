#include<bits/stdc++.h>
int isSet(int n,int k){
    int x = 1<<(k-1);
    return n&x;
}
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    if(isSet(n,k)){
        cout<<"The bit is set";
    }
    else{
        cout<<"The bit is not set";
    }
    return 0;
}