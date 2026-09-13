// Problem: Reverse String
// Platform: LeetCode
// Link: https://leetcode.com/problems/reverse-string/
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size()-1;
        while(i < j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
};