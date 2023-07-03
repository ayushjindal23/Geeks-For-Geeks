// Function to find the number of days required to transport items with a given capacity
int findDays(int arr[], int cap, int N) {
    int days = 1; // Initialize the number of days to 1
    int load = 0; // Initialize the current load
    
    for (int i = 0; i < N; i++) {
        if (arr[i] + load > cap) {
            days += 1; // If adding the current item exceeds the capacity, increment the number of days
            load = arr[i]; // Start a new load with the current item's weight
        } else {
            load += arr[i]; // Add the current item to the current load
        }
    }
    
    return days;
}

// Function to find the least weight capacity needed to transport items in D days
int leastWeightCapacity(int arr[], int N, int D) {
    int maxi = INT_MIN; // Initialize the maximum weight capacity needed for any single day
    int sum = 0; // Initialize the total weight sum of all items
    
    // Loop through the array to find the maximum item weight (maxi) and the total weight sum (sum)
    for (int i = 0; i < N; i++) {
        maxi = max(maxi, arr[i]);
        sum += arr[i];
    }
    
    int low = maxi; // Initialize the minimum weight capacity needed (starts with the maximum item weight)
    int high = sum; // Initialize the maximum weight capacity needed (starts with the total weight sum)
    
    // Perform binary search to find the minimum weight capacity that satisfies the given number of days (D)
    while (low <= high) {
        int mid = (low + high) / 2; // Calculate the middle capacity
        
        int numberOfDays = findDays(arr, mid, N); // Find the number of days required for the current capacity
        
        if (numberOfDays <= D) {
            // If the number of days required is less than or equal to D, update the high end of the range
            // to find a smaller capacity that still satisfies the requirement
            high = mid - 1;
        } else {
            // If the number of days required is greater than D, update the low end of the range
            // to find a larger capacity that satisfies the requirement
            low = mid + 1;
        }
    }
    
    // Return the minimum weight capacity that satisfies the given number of days (D)
    return low;
}
