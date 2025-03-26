#include<bits/stdc++.h>
using namespace std;
void productofallelements(int arr[],int n){
    // calculate prefix mulitplication
    int pre[n];
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i] = pre[i-1]*arr[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<pre[i]<<endl;
    // }
    int suff[n];
    suff[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        suff[i]=suff[i+1]*arr[i];
    }
    arr[0]=suff[1];
    arr[n-1]= pre[n-2];
    for(int i=1;i<n-1;i++){
        arr[i] = suff[i+1]*pre[i-1];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    productofallelements(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// most effecient solution to this problem
// class Solution {
//     public:
//         vector<int> productExceptSelf(vector<int>& nums) {
//             int n=nums.size();
//             vector<int>ans(nums.size(),1);
//             for(int i=1;i<n;i++){
//                 ans[i]=ans[i-1]*nums[i-1];
//             }
//             int right=nums[n-1];
//             for(int i=n-2;i>=0;i--){
//                 ans[i]=ans[i]*right;
//                 right*=nums[i];
//             }
//             return ans;
//         }
//     }