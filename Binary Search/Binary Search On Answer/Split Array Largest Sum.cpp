class Solution {
public:
    bool check(int mid, int array[], int n, int K) {
        int count = 0;
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            // Increase sum of current sub-array
            sum += array[i];
            
            // If the sum is greater than mid, increase count
            if (sum > mid) {
                count++;
                sum = array[i];
            }
        }
        count++;
     
        // Check condition
        if (count <= K)
            return true;
        
        return false;
    }
  
    int splitArray(int arr[], int N, int K) {
        int* maxElement = max_element(arr, arr + N);
        int start = *maxElement; // Max subarray sum, considering subarray of length 1
        int end = 0;
     
        for (int i = 0; i < N; i++) {
            end += arr[i]; // Max subarray sum, considering subarray of length N
        }
     
        // The answer stores the possible maximum subarray sum
        int answer = 0;
        
        while (start <= end) {
            int mid = (start + end) / 2;
     
            // If mid is a possible solution, update answer = mid
            if (check(mid, arr, N, K)) {
                answer = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
     
        return answer;
    }
};
