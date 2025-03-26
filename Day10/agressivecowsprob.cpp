#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isValid(vector<int>&arr, int N,int C,int minAllowedDist){
    int cows = 1,lastStall = arr[0];
    for(int i=0;i<N;i++){
        if(arr[i] - lastStall >= minAllowedDist){
            cows++;
            lastStall = arr[i]; //now another cow is placed and the last stall has changed
        }
        if(cows == C){
            return true;
        }
    }
    return false;
}
int getDistance(vector<int>&arr, int N,int C){
    // Sort the array because it will be required in the isValid function so to avoid sorting again and again we do it here
    sort(arr.begin(),arr.end());
    // int maxValue = arr[n-1],minValue = arr[0]
// now we will find the min and max value between which we want to apply the binary search
    int lo = 1,hi = arr[N-1] - arr[0];
    // The minimum dist between two cows could be the 1 and the largest of the minimum  distance that could be betwwen the cows
    // is the diff between the largest and the first element in array
    int ans = -1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(isValid(arr,N,C,mid)){
            ans = mid;
            lo =mid+1;
        }else{
            hi = mid-1;
        }
    }
    return ans;
}
int main(){
    int N =5,C=3;
    vector<int> arr = {1,2,8,4,9};
    cout<<getDistance(arr,N,C)<<endl;
    return 0;
}