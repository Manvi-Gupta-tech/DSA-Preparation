// Problem: Missing Number
// Platform: LeetCode
// Link: https://leetcode.com/problems/missing-number/description/
// Time Complexity: O(nlogn + n) = O(nlogn)
// Space Complexity: O(1)


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            if(i != nums[i])
                return i;
        }
        return nums.size();
    }
};