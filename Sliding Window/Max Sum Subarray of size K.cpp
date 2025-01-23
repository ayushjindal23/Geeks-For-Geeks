//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // Initialize variables
        int n = arr.size(); 
        if (n < k) {
            return -1; // Handle invalid input: k is greater than array size
        }
        int l = 0, r = k - 1; // Initialize pointers for the sliding window
        int sum = 0; // Initialize sum of the current window

        // Calculate the initial sum of the first 'k' elements
        for (int i = l; i <= r; i++) { 
            sum += arr[i]; 
        }

        int maxSum = sum; // Initialize maxSum with the initial sum

        // Slide the window through the array
        while (r < arr.size() - 1) { 
            // Remove the leftmost element from the window
            sum -= arr[l]; 
            // Move the left pointer to the right
            l++; 
            // Add the new element to the right of the window
            r++; 
            sum += arr[r]; 

            // Update maxSum if the current sum is greater
            maxSum = max(maxSum, sum); 
        }

        return maxSum; 
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } 

**Time Complexity:**

* **O(n)** 

   - The code iterates through the array once using the `while` loop. 
   - Inside the loop, constant-time operations like addition, subtraction, and comparison are performed. 
   - Therefore, the overall time complexity is linear with respect to the size of the input array (`n`).

**Space Complexity:**

* **O(1)** 

   - The code uses a constant amount of extra space. 
   - It uses a few integer variables (`n`, `l`, `r`, `sum`, `maxSum`) to store intermediate values. 
   - The space used by these variables remains constant regardless of the input array size.

https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
