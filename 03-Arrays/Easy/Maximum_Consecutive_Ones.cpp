// Problem: Maximum Consecutive Ones
// Platform: LeetCode
// Link: https://leetcode.com/problems/max-consecutive-ones/?utm=codolio
// Time Complexity: O(1)
// Space Complexity: O(n)


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                count++;
                maxi = max(maxi,count);
            }
            else
                count = 0;
        }
        return maxi;
    }
};
