
class Solution{
    public:
        bool isSubSequence(string A, string B) 
        {
            int n = A.length(); // Length of string A
            int m = B.length(); // Length of string B
            
            //edge cases
            if(n==0) return true;
            if(m==0) return false;
            if(n>m)  return false;
    
            int i = 0; // Pointer to traverse string A
        
            // Iterate through string B
            for (int j = 0; j < m; j++) {
                // If the current character of A matches the current character of B
                // Move the pointer i to the next character in string A
                if (A[i] == B[j]) {
                    i++;
                }
            }
        
            // If the pointer i reaches the end of string A, it means all characters of A
            // were found in the same order in string B, and A is a subsequence of B.
            // In this case, return true (1), otherwise return false (0).
            return (i == n);
        }

};
