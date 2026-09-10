// Problem: Remove Duplicates from Sorted Array
// Platform: LeetCode
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Approach 1: TC = O(nlogn) | SC = O(k), where k = number of unique elements
// Approach 2: Optimal -> TC = O(n) | O(1)


/*
*******Approach 1: O(n logn ) - Map Approach*******
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
*/


// *******Approach 2: O(n) - Optimal Two-Pointer Approach*******
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 1;
        while(j < nums.size())
        {
            if(nums[i] != nums[j])
            {
                i++;
                swap(nums[i],nums[j]);
            }
            j++;
        }
        return i+1;
    }
};