int missingNumber(int A[], int N)
{
    // Your code goes here
      // Given the range of elements are 1 more than the size of array
    
   
    int total = (N) * (N + 1) / 2;
    for (int i = 0; i < N-1; i++)
        total -= A[i];
    return total;
}
