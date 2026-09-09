// Problem: Check if array is sorted and rotated 
// Platform: LeetCode 
// Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/
// Time Complexity: O(n)
// Space Complexity: O(1)

void MYreverse(vector<int>& nums, int a, int b)
{
    while(a < b)
    {
        swap(nums[a],nums[b]);
        a++;
        b--;
    }
}
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int i = 1;
        for(; i < nums.size(); i++)
        {
            if(nums[i] < nums[i-1])
            {
                count = i;
                break;
            }
        }
        if(count == 0)
            return true; 
        else
        {
            MYreverse(nums,0,i-1);
            MYreverse(nums,i,nums.size()-1);
            for(int j = 1; j < nums.size(); j++)
            {
                if(nums[j] > nums[j-1])
                    return false;
            }
        }
        return true;
    }
};