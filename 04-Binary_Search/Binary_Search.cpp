// Problem: Binary Search
// Platform: GeeksforGeeks
// Link: https://www.geeksforgeeks.org/problems/who-will-win-1587115621/1
// Time Complexity: O(logn)
// Space Complexity: O(1)

class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int left = 0;
        int right = arr.size()-1;
        while(left <= right)
        {
            int mid = left + (right-left)/2;
            if(arr[mid] == k)
                return true;
            else if(arr[mid] > k)
                right--;
            else if(arr[mid] < k)
                left++;
        }
        return false;
    }
};