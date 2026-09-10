// Problem: Union of 2 Sorted Arrays
// Platform: GeeksforGeeks
// Link: https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
// Time Complexity: O((m+n)logk + k) = O((m+n)logk); m = a.size(), n = b.size(), O(logk) = TC for insertion in Set, O(k) = TC for insertion in vector
// Space Complexity: O(k), where k = unique elements of both arrays


class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int> unique;
        for(int i = 0; i < a.size(); i++)
            unique.insert(a[i]);
        for(int i = 0; i < b.size(); i++)
            unique.insert(b[i]);
        vector<int> result;
        for(auto it:unique)
            result.push_back(it);
        return result;
    }
};