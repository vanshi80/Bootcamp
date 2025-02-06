#include<bits/stdc++.h>
int countbitstoflip(int n1,int n2){
// first find xor and then count the number of set bits in the xor
    int exor = n1^n2;
    int count =0;
    while(exor!=0){
        count++;
        exor = exor&(exor-1);
    }
    return count;
}
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    cout<<"The number of bits to be flipped are "<<countbitstoflip(n1,n2)<<endl;
    return 0;
}