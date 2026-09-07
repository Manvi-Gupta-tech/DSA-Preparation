// Problem: Remove duplicate characters from a string
// Input: "programming"
// Output: "progamin"
// Approach: Unordered Map
// Time Complexity: O(n) average
// Space Complexity: O(k), where k = number of distinct characters

#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    string s = "programming";
    string result(s.size(), ' ');
    unordered_map<char,int> mpp;
    int j = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(mpp[s[i]] == 0)
        {
            result[j] = s[i];
            j++;
        }
        mpp[s[i]]++;
    }
    result.resize(j);
    cout << result << endl;
    return 0;
}
