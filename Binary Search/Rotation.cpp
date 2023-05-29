class Solution {
public:
  int findKRotation(int arr[], int n) {
    // Initialize low and high indexes.
    int low = 0;
    int high = n - 1;

    // If array is already sorted, return 0.
    if (arr[low] <= arr[high]) {
      return 0;
    }

    // Loop while low is less than or equal to high.
    while (low <= high) {
      // Find the middle index.
      int mid = low + (high - low) / 2;

      // Find the previous and next indices of the middle index.
      int prev = (mid - 1 + n) % n;
      int next = (mid + 1) % n;

      // If the middle element is less than or equal to the previous and next elements,
      // then the middle element is the pivot.
      if (arr[mid] <= arr[prev] && arr[mid] <= arr[next]) {
        return mid;
      }

      // If the middle element is less than or equal to the high element,
      // then the pivot must be in the right subarray.
      else if (arr[mid] <= arr[high]) {
        high = mid - 1;
      }

      // If the middle element is greater than or equal to the low element,
      // then the pivot must be in the left subarray.
      else {
        low = mid + 1;
      }
    }

    // If the loop terminates, then the pivot is not found.
    return 0;
  }
};
