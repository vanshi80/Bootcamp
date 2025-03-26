//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int max(int a,int b){
        if(a>b) return a;
        else return b;
    }
    bool isValid(vector<int>&arr,int n,int m,int maxAllowedTime){
        int painter = 1,timetaken = 0;
        for(int i=0;i<n;i++){
            // if(arr[i]>maxAllowedTime){
            //     return false;
            // }
            if(arr[i]+timetaken <= maxAllowedTime){
                timetaken+=arr[i];
            }else{
                painter++;
                timetaken = arr[i];
            }
            if (painter > m) {
                return false;
            }
        }
        return true;
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        // return minimum time
        int n = arr.size();
        if(k>n) return -1;
        // here the minimum time for a painter to paint a board could be the max of all board painting times because the painter 
        // must take at least that much time to paint the board not less than the maximum one in the board lengths.
        int sum = 0,maxBoard = INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            maxBoard = max(arr[i],maxBoard);
        }
        int lo = maxBoard,hi = sum;
        int ans=-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(isValid(arr,n,k,mid)){
                ans = mid;
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution obj;
        cout << obj.minTime(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends