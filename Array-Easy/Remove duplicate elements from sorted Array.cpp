class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        if (n==0 || n==1)
        return n;
  
    // To store index of next unique element
    int j = 0;
  
    // Doing same as done in Method 1
    // Just maintaining another updated index i.e. j
    for (int i=0; i < n-1; i++)
        if (a[i] != a[i+1])
            a[j++] = a[i];
  
    a[j++] = a[n-1];
  
    return j;
    }
};
