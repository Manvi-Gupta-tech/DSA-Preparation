// Problem: Move Zeroes to End 
// Platform: LeetCode
// Link: https://leetcode.com/problems/move-zeroes/description/
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 1;
        while(j < nums.size())
        {
            if(nums[i] != 0)
            {
                i++;
            }
            else if(nums[i] == 0 && nums[j] != 0)
            {
                swap(nums[i],nums[j]);
                i++;
            } 
            j++;
        }
    }
};