// Problem: Check whether a string is a palindrome or not
// Input: "madaM"
// Output: "String is not palindrome"
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
using namespace std;
int main()
{
    string s = "madaM";
    int left = 0;
    int right = s.size()-1;
    bool flag = true;
    while(left < right)
    {
        if(s[left] != s[right])
        {
            flag = false;
            break;
        }
        
        left ++;
        right --;
    }
    if(flag)
        cout << "String is pallindrome";
    else
        cout << "String is not pallindrome";
    return 0;
}
