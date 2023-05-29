class Solution {
public:

  // Finds the leftmost index of `x` in the array `arr`.
  int left(int arr[], int n, int x) {
    // Initialize the start and end indices.
    int s = 0;
    int e = n - 1;

    // Initialize the result to -1.
    int res = -1;

    // Iterate over the array, starting from the left.
    while (s <= e) {
      // Find the middle index.
      int mid = s + (e - s) / 2;

      // If `x` is equal to the element at the middle index,
      // update the result and set `e` to the middle index - 1.
      if (x == arr[mid]) {
        res = mid;
        e = mid - 1;
      }
      // If `x` is less than the element at the middle index,
      // set `e` to the middle index - 1.
      else if (x < arr[mid]) {
        e = mid - 1;
      }
      // If `x` is greater than the element at the middle index,
      // set `s` to the middle index + 1.
      else {
        s = mid + 1;
      }
    }

    // Return the result.
    return res;
  }

  // Finds the rightmost index of `x` in the array `arr`.
  int right(int arr[], int n, int x) {
    // Initialize the start and end indices.
    int s = 0;
    int e = n - 1;

    // Initialize the result to -1.
    int res = -1;

    // Iterate over the array, starting from the right.
    while (s <= e) {
      // Find the middle index.
      int mid = s + (e - s) / 2;

      // If `x` is equal to the element at the middle index,
      // update the result and set `s` to the middle index + 1.
      if (x == arr[mid]) {
        res = mid;
        s = mid + 1;
      }
      // If `x` is less than the element at the middle index,
      // set `s` to the middle index + 1.
      else if (x < arr[mid]) {
        s = mid + 1;
      }
      // If `x` is greater than the element at the middle index,
      // set `e` to the middle index - 1.
      else {
        e = mid - 1;
      }
    }

    // Return the result.
    return res;
  }

  // Counts the number of occurrences of `x` in the array `arr`.
  int count(int arr[], int n, int x) {
    // Find the leftmost and rightmost indices of `x` in the array.
    int a = left(arr, n, x);
    int b = right(arr, n, x);

    // If `a` or `b` is -1, then `x` does not occur in the array.
    if (a == -1 || b == -1) {
      return 0;
    }

    // Otherwise, return the number of elements between `a` and `b`, inclusive.
    return b - a + 1;
  }
};
