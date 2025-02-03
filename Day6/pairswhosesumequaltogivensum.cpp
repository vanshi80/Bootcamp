#include<bits/stdc++.h>
using namespace std;
void findpairs(int arr[],int n,int targetsum){
    sort(arr,arr+n);
    int start =0;
    int end = n-1;
    int cursum = 0;
    bool found = false;
    while(start<end){
        cursum+=arr[start]+arr[end];
        if(cursum>targetsum){
            end--;
            cursum = 0;
        }
        else if(cursum<targetsum){
            start++;
            cursum = 0;
        }
        else{
           cout<<"("<<arr[start]<<","<<arr[end]<<")"<<endl;;
           start++;
           end--;
           found = true; 
           cursum = 0;
        }
    }
    if(!found){
        cout<<"No pair is found";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int targetsum;
    cin>>targetsum;
    findpairs(arr,n,targetsum);
    return 0;
}