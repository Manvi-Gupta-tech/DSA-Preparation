// Problem: Reverse words of a string
// Input: "I Love Programming"
// Output: "Programming Love I"
// Approach: Vector + Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s = "I Love Programming";
    vector<int> spaces;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
            spaces.push_back(i);
    }
    vector<string> words;
    int j = 0;
    for(int i = 0; i < spaces.size(); i++)
    {
        words.push_back(s.substr(j,spaces[i]-j));
        j = spaces[i] + 1;
    }
    words.push_back(s.substr(j,s.size()-j));
    int left = 0;
    int right = words.size()-1;
    while(left < right)
    {
        swap(words[left],words[right]);
        left++;
        right--;
    }
    for(int i = 0; i < words.size(); i++)
    {
        cout << words[i];
        if(i != words.size() - 1) // To avoid printing extra space after the last word "I"
            cout << " ";
    }
    return 0;
}
