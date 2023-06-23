class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
            int start = 0, end = n - 1, mid;
 
    // For Edge Cases
    if (n == 1) // If only one element is in the array
        return arr[0];
 
    if (arr[start]
        != arr[start + 1]) // If the first element
                            // is the element that
                            // appears only once
        return arr[start];
 
    if (arr[end]
        != arr[end - 1]) // If Last element is the element
                          // that appears only once
        return arr[end];
 
    // Binary Search
    while (start <= end)
    {
        mid = start + (end - start) / 2;
       
        // CASE 1
        if (arr[mid] != arr[mid - 1]
            && arr[mid] != arr[mid + 1])
            return arr[mid];
       
        // CASE 2 and CASE 3
        else if ((arr[mid] == arr[mid + 1]
                  && mid % 2 == 0)
                 || (arr[mid] == arr[mid - 1]
                     && mid % 2 != 0))
            start = mid + 1;
       
        // CASE 4 and CASE 5
        else
            end = mid - 1;
    }
   
    // If no such element found
    return -1;
    }
};
