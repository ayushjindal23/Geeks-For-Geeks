    string longestCommonPrefix(vector<string>& strs) {
      
      if (strs.empty()) {
          return "";
      }
              // Find the length of the first string in the vector.
      int l = strs[0].size();

      // Iterate through the remaining strings in the vector.
      for (int i = 1; i < strs.size(); i++) {
          // Initialize a counter to track the number of matching characters.
          int j = 0;
  
          // Compare each character in the current string to the corresponding character in the first string.
          while (j < l && strs[i][j] == strs[0][j]) {
            j++;
          }
  
          // Update the length of the longest common prefix.
          l = min(l, j);
        }
  
        // If the length of the longest common prefix is 0, return "-1".
        if (l == 0) {
          return "";
      }

      // Return the longest common prefix as a string.
      return strs[0].substr(0, l);
        
    }

// TC: O(N*M)
// SC: O(1)
