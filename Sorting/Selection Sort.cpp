// Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest 
// (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. 

// repeat (numOfElements - 1) times
//   set the first unsorted element as the minimum
//   for each of the unsorted elements
//     if element < currentMinimum
//       set element as new minimum
//   swap minimum with first unsorted position

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) { // Function to perform Selection Sort
    for (int i = 0; i < n - 1; i++) { // Outer loop for selecting the minimum element
        int minIndex = i; // Assume the current index has the minimum element initially

        for (int j = i + 1; j < n; j++) { // Inner loop to find the minimum element in the unsorted portion
            if (arr[j] < arr[minIndex]) { // Compare current element with the minimum found so far
                minIndex = j; // Update the index of the minimum element
            }
        }

        if (minIndex != i) { // If the minimum element's index is not the same as the current index
            swap(arr[i], arr[minIndex]); // Swap the minimum element with the current element
        }
    }
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n); // Call the selectionSort function to sort the array

    for (int i = 0; i < n; i++) { // Loop to print the sorted array
        cout << arr[i] << " ";
    }

    return 0;
}


// Time Complexity: The time complexity of Selection Sort is O(N2) as there are two nested loops:

//                   One loop to select an element of Array one by one = O(N)
//                   Another loop to compare that element with every other Array element = O(N)
//                   Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N2)
  
// Auxiliary Space: O(1) as the only extra memory used is for temporary variables while swapping two values in Array. 
//                   The selection sort never makes more than O(N) swaps and can be useful when memory writing is costly.
