// Platform: GeeksforGeeks
// Problem: Largest in Array 
// Link: https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
// Time Complexity: O(n) 
// Space Complexity: O(1)

class Solution {
  public:
    int largest(vector<int> &arr) {
        int maxElement = arr[0];
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] > maxElement)
                maxElement = arr[i];
        }
        return maxElement;
    }
};
