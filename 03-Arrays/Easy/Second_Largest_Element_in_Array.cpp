// Problem: Second Largest Element in an Array 
// Platform: GeeksforGeeks 
// Link: https://www.geeksforgeeks.org/problems/second-largest3735/1
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        int second_largest = -1;
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] > largest)
            {
                second_largest = largest;
                largest = arr[i];
            }
            if(arr[i] < largest && arr[i] > second_largest)
                second_largest = arr[i];
        }
        return second_largest;
    }
};