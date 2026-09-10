// Problem: Linear Search 
// Platform: GeeksforGeeks 
// Link: https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1
// Time Complexity: O(n)
// Space Complexity: O(1)



int search(int arr[], int n, int x) {
    // Code here
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
            return i;
    }
    return -1;
}