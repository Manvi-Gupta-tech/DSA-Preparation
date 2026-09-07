// Problem: Find the first occurrence of one string in another
// Input: s1 = "hello", s2 = "ll"
// Output: 2
// Approach: Substring Comparison
// Time Complexity: O(n * m)
// Space Complexity: O(m)

#include<iostream>
using namespace std;
int main()
{
    string s1 = "hello";
    string s2 = "ll";
    int i = 0;
    bool flag = false;
    if(s2.size() > s1.size())
        cout << "String is not present";
    else
    {
        while(i <= s1.size() - s2.size())
        {
            if(s1.substr(i,s2.size()) == s2)
            {
                cout << i;
                flag = true;
                break;
            }
            i++;
        }
        if(!flag)
            cout << "String is not present";
    }
    return 0;
} 
