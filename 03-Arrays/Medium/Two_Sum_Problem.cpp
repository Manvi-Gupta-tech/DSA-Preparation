// Problem: Two Sum Problem
// Platform: LeetCode
// Link: https://leetcode.com/problems/two-sum/
// Time Complexity: O(n)
// Space Complexity: O(n)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i = 0; i < nums.size(); i++)
        {
            if(mpp.find(target-nums[i]) == mpp.end())
                mpp[nums[i]] = i;
            else
                return {i,mpp[target-nums[i]]};
        }
        return {-1,-1};
    }
};