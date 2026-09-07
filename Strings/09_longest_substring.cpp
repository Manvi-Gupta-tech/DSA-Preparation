// Problem: Find the longest substring without repeating characters
// Input: "abcabcbb"
// Output: 3
// Approach: Unordered Map + Sliding Window
// Time Complexity: O(n)
// Space Complexity: O(k), where k = number of distinct characters

#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    string s = "abcabcbb";
    int left = 0;
    int maxi = 0;
    unordered_map<char,int> mpp;
    int right;
    for(right = 0; right < s.size(); right++)
    {
        if(mpp.find(s[right]) != mpp.end())
        { 
            if (maxi < (right - left))
                maxi = right-left;
            if (left < mpp[s[right]]+1)
                left = mpp[s[right]]+1;
            mpp[s[right]] = right;            
        }
        
        else
        {
            mpp[s[right]] = right;
        }
    }
    if (maxi < (right - left))
        maxi = right-left;
    cout << maxi;
    return 0;
}
