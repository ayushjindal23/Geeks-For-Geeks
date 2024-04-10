// Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list.
// It is a stable sorting algorithm, meaning that elements with equal values maintain their relative order in the sorted output.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9}; // Input array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Bubble sort algorithm
    for (int i = n - 1; i >= 0; i--) { // Outer loop for passes
        for (int j = 0; j <= i - 1; j++) { // Inner loop for comparisons
            if (arr[j] > arr[j + 1]) { // Compare adjacent elements
                // Swap elements if they are in the wrong order
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print the sorted array
    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0; // Return 0 to indicate successful execution
}

// Time complexity: O(N2), (where N = size of the array), for the worst, and average cases.

// Reason: If we carefully observe, we can notice that the outer loop, say i, is running from 0 to n-1 i.e. n times, and for each i, the inner loop j runs from i to 1 i.e. i times. 
//     For, i = 1, the inner loop runs 1 time, for i = 2, the inner loop runs 2 times, and so on. So, the total steps will be approximately the following: 1 + 2 + 3 +......+ (n-2) + (n-1). 
//     The summation is approximately the sum of the first n natural numbers i.e. (n*(n+1))/2. The precise time complexity will be O(n2/2 + n/2). Previously, we have learned that we can ignore the lower values as well as the constant coefficients. So, the time complexity is O(n2). Here the value of n is N i.e. the size of the array.

// Space Complexity: O(1)

// Best Case Time Complexity:
// The best case occurs if the given array is already sorted. 
//     And if the given array is already sorted, the outer loop will only run and the inner loop will run for 0 times. 
//     So, our overall time complexity in the best case will boil down to O(N), where N = size of the array.
