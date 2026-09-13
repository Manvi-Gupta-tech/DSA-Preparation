// Problem: Valid Anagram
// Platform: LeetCode
// Link: https://leetcode.com/problems/valid-anagram/
// Time Complexity: O(n + m)
// Space Complexity: O(k1 + k2)
// where n = length of s, m = length of t,
// k1 = distinct characters in s,
// k2 = distinct characters in t


class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        for(int i = 0; i < s.size(); i++)
            map1[s[i]]++;
        for(int j = 0; j < t.size(); j++)
            map2[t[j]]++;
        if(map1.size() != map2.size())
            return false;
        for(auto it:map1)
        {
            if(it.second != map2[it.first])
                return false;
        }
        return true;
    }
};