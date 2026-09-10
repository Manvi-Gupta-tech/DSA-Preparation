// Problem: Remove Duplicates from Sorted Array
// Platform: LeetCode
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Time Complexity: O(nlogn)
// Space Complexity: O(k), where k = number of unique elements 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mpp;
        for(int i = 0; i < nums.size(); i++)
        {
            mpp[nums[i]]++;
        }
        int i = 1;
        int j = mpp[nums[0]];
        while(j < nums.size())
        {
            swap(nums[i],nums[j]);
            j = mpp[nums[i]] + j;
            i++;
        }
        return i;
    }
};