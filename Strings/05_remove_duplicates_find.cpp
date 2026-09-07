// Problem: Remove duplicate characters from a string
// Input: "programming"
// Output: "progamin"
// Approach: String find()
// Time Complexity: O(n²)
// Space Complexity: O(n)

#include<iostream>
using namespace std;
int main()
{
    string s = "programming";
    string result(s.size(),' ');
    int j = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(result.substr(0,j).find(s[i]) == string::npos)
        {
            result[j] = s[i];
            j++;
        }
    }
    result.resize(j);
    cout << result << endl;
    return 0;
}
