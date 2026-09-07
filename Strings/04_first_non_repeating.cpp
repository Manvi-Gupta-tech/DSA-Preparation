// Problem: Find the first character that occurs only once
// Input: "aabbcddee"
// Output: c
// Approach: Unordered Map
// Time Complexity: O(n) average
// Space Complexity: O(k), where k = number of distinct characters

#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    string s = "aabbcddee";
    unordered_map<char,int> result;
    for(int i = 0; i < s.size(); i++)
    {
        result[s[i]]++;
    }
    for(int i = 0; i < s.size(); i++)
    {
        if(result[s[i]] == 1)
        {
            cout << s[i];
            break;
        }
    }
    return 0;
}
