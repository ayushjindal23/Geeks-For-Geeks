class Solution {
public:
    string removeOuter(string& s) {
       
        // Initialize an empty string to store the result
        string res = "";

        // Initialize a count variable to keep track of opened parentheses
        int count = 0;

        // Loop through each character in the input string 's'
        for (char c : s) {

            // If an opening parenthesis '(' is encountered
            if (c == '(') {
                // Check if it's not the outermost '(' in the current primitive substring
                if (count > 0) {
                    // Add the character to the result string
                    res += c;
                }
                // Increment the count of opened parentheses
                count++;
            }

            // If a closing parenthesis ')' is encountered
            if (c == ')') {
                // Check if it's not the outermost ')' in the current primitive substring
                if (count > 1) {
                    // Add the character to the result string
                    res += c;
                }
                // Decrement the count of opened parentheses
                count--;
            }
        }

        // Return the resultant string with outermost parentheses removed from each primitive substring
        return res;
    }
};


// ------------------------------------ Optimalal Approach -----------------------------------------------------------------------

string removeOuterParentheses(string s) {
  // Initialize two variables to keep track of the number of opening and closing parentheses.
  int openCount = 0;
  int closeCount = 0;
  string result = "";
  int start = 0;

  // Loop through each character in the input string.
  for (int i = 0; i < s.length(); i++) {
    // If the character is an opening parenthesis, increment the openCount variable.
    if (s[i] == '(') {
      openCount++;
    }
    // If the character is a closing parenthesis, increment the closeCount variable.
    else if (s[i] == ')') {
      closeCount++;
    }

    // If the openCount variable equals the closeCount variable, it means that a complete substring of parentheses has been encountered.
    if (openCount == closeCount) {
      // Add the substring to the output string, without the outermost parentheses.
      result += s.substr(start + 1, i - start - 1);
      // Increment the start variable to the index of the first character in the next substring.
      start = i + 1;
    }
  }

  // Return the output string.
  return result;
}
