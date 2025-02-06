#include<bits/stdc++.h>
using namespace std;
    int max(int a,int b){
        if(a>b) return a;
        else return b;
    }
    int maximumProfit(int prices[],int n) {
        // code here
        // int n = prices.size();
        int rmax[n];
        rmax[n-1] = prices[n-1];
        for(int i = n-2;i>=0;i--){
            rmax[i] = max(rmax[i+1],prices[i]);
        }
        int res = 0;
        for(int i=0;i<n;i++){
            res = max(res,rmax[i]-prices[i]);
        }
        return res;
    }
    int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"The maximum profit is "<<maximumProfit(arr,n)<<endl;
        return 0;
    }
