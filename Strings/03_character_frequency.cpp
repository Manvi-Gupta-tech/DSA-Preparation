// Problem: Frequency of each character in the string
// Input: "programming"
// Output: p->1 r->2 o->1 g->2 a->1 m->2 i->1 n->1
// Approach: Unordered Map
// Time Complexity: O(n) average
// Space Complexity: O(k), where k = number of distinct characters

#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    string s = "programming";
    unordered_map<char,int> result;
    for(int i = 0; i < s.size(); i++)
    {
        result[s[i]]++;
    }
    cout << "Frequency of each character in the string is as follows: " << endl;
    for(auto it : result)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    return 0;
}
