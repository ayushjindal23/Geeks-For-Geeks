//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool allocationIsPossible(int A[], int N, int M, int b) {
        int allocatedStu = 1; // Initialize the number of students allocated
        int pages = 0; // Initialize the total pages allocated to a student
        
        for (int i = 0; i < N; i++) {
            if (A[i] > b)
                return false; // If any book has more pages than the given maximum, allocation is not possible
            if (pages + A[i] > b) {
                allocatedStu++; // If adding the current book exceeds the maximum pages per student, allocate to the next student
                pages = A[i]; // Start a new allocation with the current book's pages
            } else {
                pages += A[i]; // Add the current book's pages to the current allocation
            }
            
        }
        if (allocatedStu > M)
                return false; // If the number of allocated students exceeds the given number of students, allocation is not possible

        return true; // Allocation is possible
    }
    
    // Function to find the minimum number of pages
    int findPages(int A[], int N, int M) {
        
        int sum = 0;
        if (N < M)
            return -1; // If the number of books is less than the number of students, allocation is not possible
        
        for (int i = 0; i < N; i++)
            sum += A[i]; // Calculate the total number of pages
        
        int low = A[0]; // Minimum pages that can be allocated to a student (minimum book pages)
        int high = sum; // Maximum pages that can be allocated to a student (total book pages)
        int res = -1; // Result variable to store the minimum number of pages
        
        while (low <= high) {
            int mid = (low + high) / 2; // Calculate the middle value
            
            if (allocationIsPossible(A, N, M, mid)) {
                res = mid; // Update the result to the current allocation if it is possible
                high = mid - 1; // Search for a smaller allocation in the left half
            } else {
                low = mid + 1; // Search for a larger allocation in the right half
            }
        }
        
        return res; // Return the minimum number of pages
    }
};
