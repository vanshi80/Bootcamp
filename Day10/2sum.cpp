// This is not the correct solution because the indexes of all the values get shuffled due to sorting and when we print the indexed
// we print the sorted indexes not the original ones so we need a solution to this
// #include<vector>
// #include<bits/stdc++.h>
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> pair;
//         sort(nums.begin(),nums.end());
//         int lo = 0;
//         int hi = nums.size()-1;
//         while(lo<=hi){
//             int s = nums[lo]+nums[hi];
//             if(s<target){
//                 lo++;
//             }
//             else if(s>target){
//                 hi--;
//             }else{
//                 pair.push_back(lo);
//                 pair.push_back(hi);
//                 break;
//             }
//         }
//         return pair;
//     }
// };
// This is the optimised solution to this problem here we have created a vector for storing the pair by following a special format
// vector<pair<int,int>> and then storing each value with its index and then sorting the resultant array and thn find pair by accessing
// the sorted values by using the first function and then returing the indx by using second to get the original index
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> numswithIdx;
        for(int i=0;i<nums.size();i++){
            numswithIdx.push_back({nums[i],i});
        }
        // This sorting is done on the basis of the values only.
        sort(numswithIdx.begin(),numswithIdx.end());
        int lo = 0;
        int hi = numswithIdx.size()-1;
        while(lo<=hi){
            int s = numswithIdx[lo].first+numswithIdx[hi].first;
            if(s<target){
                lo++;
            }
            else if(s>target){
                hi--;
            }else{
                return {numswithIdx[lo].second, numswithIdx[hi].second};
            }
        }
        return {};
    }
};