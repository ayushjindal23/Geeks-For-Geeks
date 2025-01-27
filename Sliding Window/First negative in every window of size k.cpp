#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
    vector<int> result;       // To store the first negative integer for each window
    queue<int> q;             // To store indices of negative elements in the current window
    
    int left = 0, right = 0;
    
    while (right < arr.size()) {
        // If the current element is negative, add it to the queue (storing its index)
        if (arr[right] < 0) {
            q.push(right);
        }
        
        // If the window size is less than k, expand the window by moving right
        if ((right - left + 1) < k) {
            right++;
        }
        // If the window size is exactly k, process the window
        else if ((right - left + 1) == k) {
            // If the queue is empty, it means no negative number in the current window
            if (q.empty()) {
                result.push_back(0);
            } else {
                // Otherwise, the first negative integer is at the front of the queue
                result.push_back(arr[q.front()]);
                
                // Remove the element from the queue if it is going out of the window
                if (q.front() == left) {
                    q.pop();
                }
            }
            // Slide the window by moving left and right
            left++;
            right++;
        }
    }
    
    return result;
}

int main() {
    int n, k;
    
    // Input the size of the array
    cout << "Enter array size n > ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter arr values > ";
    
    // Input the array values
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Input the window size
    cout << "Enter window size k > ";
    cin >> k;
    
    // Call the function to find the first negative integer in each window of size k
    vector<int> result = FirstNegativeInteger(arr, k);
    
    // Output the result
    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}

/*
Time Complexity: O(n)
The array is processed once with each element being added and removed from the queue at most once.

Space Complexity: O(n)
The space is required for the result vector (O(n)) and the queue (O(k), which is bounded by the window size k).

https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
*/
