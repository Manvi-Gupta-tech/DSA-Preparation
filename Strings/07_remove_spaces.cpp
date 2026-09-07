// Problem: Remove all spaces from the string
// Input: "I Love Programming"
// Output: "ILoveProgramming"
// Approach: Iteration
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
using namespace std;
int main()
{
    string s = "I Love Programming";
    string result(s.size(),' ');
    int j = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != ' ')
        {
            result[j] = s[i];
            j++;
        }
    }
    result.resize(j);
    cout << result;
    return 0;
}
