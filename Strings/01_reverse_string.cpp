// Problem: Reverse a String
// Input: "I love programming"
// Output: "gnimmargorp evol I"
// Approach: Two Pointers 
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
using namespace std;
int main()
{
    string s = "I love programming";
    int left = 0;
    int right = s.size()-1;
    while(left < right)
    {
        char ch = s[left];
        s[left] = s[right];
        s[right] = ch;
        
        left++;
        right--;
    }
    cout << s << endl;
    return 0;
}
