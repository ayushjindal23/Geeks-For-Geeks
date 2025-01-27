vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
    int n = arr.size(); 
    vector<int> ans; // Initialize a vector 'ans' to store the result (first negative integer in each window).

    deque<int> Di; // Create a deque 'Di' to store indices of negative numbers.

    // Process first k (or first window) elements of array
    for (int i = 0; i < k; i++) { 
        if (arr[i] < 0) { 
            Di.push_back(i); // If the current element is negative, push its index to the deque.
        }
    }

    // Process rest of the elements, i.e., from arr[k] to arr[n-1]
    for (int i = k; i < n; i++) { 
        // If Di is not empty then the element at the front of the queue 
        // is the first negative integer of the previous window
        if (!Di.empty()) { 
            ans.push_back(arr[Di.front()]); // Add the first negative integer of the previous window to the result vector.
        } else {
            ans.push_back(0); // If no negative integer found in the previous window, add 0 to the result vector.
        }

        // Remove the elements which are out of this window
        while (!Di.empty() && Di.front() < (i - k + 1)) { 
            Di.pop_front(); // Remove indices that are no longer within the current window.
        }

        // Add current element at the rear of Di if it is a negative integer
        if (arr[i] < 0) { 
            Di.push_back(i); // Add the index of the current negative element to the deque.
        }
    }

    // Handle the last window
    if (!Di.empty()) { 
        ans.push_back(arr[Di.front()]); // Add the first negative integer of the last window to the result vector.
    } else {
        ans.push_back(0); // If no negative integer found in the last window, add 0 to the result vector.
    }

    return ans; 
}

/*
Time Complexity: O(n)

Outer Loop: The main loop iterates through the array once, from k to n-1. This takes O(n) time.
Inner Loop (if any): The inner while loop removes elements from the front of the deque if they are no longer within the current window. In the worst case, all elements in the deque might need to be removed. However, each element is removed only once, so the total time spent in this inner loop across all iterations of the outer loop is still O(n).
Deque Operations:
push_back() and pop_front() operations on the deque have an average time complexity of O(1).
Therefore, the overall time complexity of the algorithm is O(n).

Space Complexity: O(n) in the worst case

Deque: In the worst case, all elements in the array could be negative. In this scenario, the deque would store the indices of all negative numbers, leading to a space complexity of O(n).
Result Vector: The result vector stores one integer for each window, resulting in O(n - k + 1) space complexity, which is O(n) in terms of input size.
In summary:

Time Complexity: O(n)
Space Complexity: O(n) in the worst case


https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
*/
