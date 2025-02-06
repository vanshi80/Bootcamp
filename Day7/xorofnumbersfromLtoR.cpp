#include<bits/stdc++.h>
using namespace std;
int xorofnumbers(int a){
    int mod =a%4;
    if(mod == 0){
        return a; 
    }
    if(mod == 1){
        return 1;
    }
    if(mod == 2){
        return a+1;
    }
    if(mod == 3){
        return 0;
    }
}
int xorofnumbers1(int l,int r){
    return xorofnumbers(l-1) ^ xorofnumbers(r);
}
int main(){
    int l,r;
    cin>>l;
    cin>>r;
    cout<<"The result of xor from "<<l<<"to "<<r<<"is"<<xorofnumbers1(l,r);
    return 0;
}