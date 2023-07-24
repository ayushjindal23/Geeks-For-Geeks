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
