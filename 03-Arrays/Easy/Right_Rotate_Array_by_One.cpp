// Problem: Rotate Array by One 
// Platform: GeeksforGeeks
// Link: https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int num = arr[arr.size()-1];
        for(int i = arr.size()-1; i > 0; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = num;
    }
};