// This is the code for the 
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and 
// nums[i] + nums[j] + nums[k] == 0.
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> twoSum(vector<int>&nums,int start_idx,int sum){
        int lo = start_idx;
        int hi = nums.size()-1;
        vector<vector<int>> pairs;
        while(lo<hi){
            if(nums[lo]+nums[hi]>sum){
                hi--;
            }else if(nums[lo]+nums[hi]<sum){
                lo++;
            }
            else{
                pairs.push_back({nums[start_idx-1],nums[lo],nums[hi]});
                while(lo<hi && nums[lo]==nums[lo+1]){
                    lo++;
                }
                while(lo<hi && nums[hi]==nums[hi-1]){
                    hi--;
                }
                lo++;
                hi--;
            }
        }
        return pairs;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
       int n = nums.size();
       sort(nums.begin(), nums.end());
       vector<vector<int>> triplet;
       for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            vector<vector<int>> pairs =twoSum(nums,i+1,-nums[i]);
            triplet.insert(triplet.end(),pairs.begin(),pairs.end());
       } 
       return triplet;
    }
};
// If pairs is empty, this line does nothing—no memory is wasted, and no invalid triplets are added to triplet.