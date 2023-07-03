int KthMissingElement(int a[], int n, int k)
{
    // Check if there are no missing elements
    if (a[n - 1] - a[0] == n - 1) {
        return -1; // Return -1 if no missing elements
    }
    
    int low = 0, high = n - 1; // Initialize the range of possible missing elements
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (a[mid] - (a[0] + mid) < k) {
            // If the number of missing elements up to index 'mid' is less than k,
            // move the low pointer to mid + 1 and search in the right half
            low = mid + 1;
        }
        else {
            // If the number of missing elements up to index 'mid' is greater than or equal to k,
            // move the high pointer to mid - 1 and search in the left half
            high = mid - 1;
        }
    }
    
    // Calculate the k-th missing element
    int missingNumber = a[0] + high + k;
    if (missingNumber > a[n - 1]) {
        // If the calculated missing element is greater than the last element in the array,
        // it means there are fewer than k missing elements
        return -1;
    }
    
    return missingNumber;
}
