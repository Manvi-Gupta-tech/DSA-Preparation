// Problem: Check whether two strings are anagrams or not
// Input: s1 = "listen", s2 = "silent"
// Output: Strings are anagram
// Approach: Unordered Map
// Time Complexity: O(n) average
// Space Complexity: O(k), where k = number of distinct characters

#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    string s1 = "listen";
    string s2 = "silent";
    unordered_map<char,int> mpp1;
    unordered_map<char,int> mpp2;
    for(int i = 0; i < s1.size(); i++)
        mpp1[s1[i]]++;
    for(int i = 0; i < s2.size(); i++)
        mpp2[s2[i]]++;
    bool flag = true;
    if(s1.size() != s2.size())
        flag = false;
    else
    {
        for(auto it: mpp1)
        {
            if(it.second != mpp2[it.first])
            {
                flag = false;
                break;
            }
        }
    }
    if(flag)
        cout << "Strings are anagram";
    else
        cout << "Strings are not anagrams";
    return 0;
}
