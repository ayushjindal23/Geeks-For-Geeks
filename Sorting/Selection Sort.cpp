// C++ program for implementing selection sort

#include <bits/stdc++.h>
using namespace std;

int main() {
  int unsortedArray[] = {64, 25, 12, 22, 11};

  int numberOfElements = sizeof(unsortedArray) / sizeof(unsortedArray[0]);

  // Loop variables for the sorting algorithm
  int currentSortedIndex, compareIndex;

  // Outer loop: iterates through the array, gradually expanding the sorted portion
  for (currentSortedIndex = 0; currentSortedIndex < numberOfElements - 1; currentSortedIndex++)
  {
    // Inner loop: finds the minimum element in the unsorted portion
    for (compareIndex = currentSortedIndex + 1; compareIndex < numberOfElements; compareIndex++) 
    {
      // If the current element (unsortedArray[currentSortedIndex]) is greater than the element being compared (unsortedArray[compareIndex])
      if (unsortedArray[currentSortedIndex] > unsortedArray[compareIndex])
      {
        // Swap the positions of the elements using the swap function
        swap(unsortedArray[compareIndex], unsortedArray[currentSortedIndex]);
      }
    }
  }


  for (int i = 0; i < numberOfElements; i++) {
    cout << unsortedArray[i] << " ";
  }
  cout << endl;
    
  return 0;
}


// Time Complexity: The time complexity of Selection Sort is O(N2) as there are two nested loops:
// One loop to select an element of Array one by one = O(N)
// Another loop to compare that element with every other Array element = O(N)
// Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N2)
    
// Auxiliary Space: 
// O(1) as the only extra memory used is for temporary variables while swapping two values in Array. The selection sort never makes more than O(N) swaps and can be useful when memory writing is costly.
