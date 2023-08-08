int maxDepth(string s) {
        // Initialize variables
        int n = s.size();       // n holds the size of the input string s
        int depth = 0;          // depth keeps track of the current depth of balanced parentheses
        int maxDepth = 0;       // maxDepth stores the maximum depth encountered so far

        // Iterate through the characters of the input string
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                // If an opening parenthesis is found, increment the depth
                depth++;
                // Update maxDepth to hold the maximum between current maxDepth and the current depth
                maxDepth = max(maxDepth, depth);
            } else if (s[i] == ')') {
                // If a closing parenthesis is found, decrement the depth
                depth--;
            }
        }

        // Return the maximum depth of balanced parentheses in the string
        return maxDepth;
    }

int main()
{
    string s = "( ((X)) (((Y))) )";
    cout << maxDepth(s);
    return 0;
}

// Output
// 4
// Time Complexity: O(n) where n is number of elements in given string. As, we are using a loop to traverse N times so it will cost us O(N) time.
// Auxiliary Space: O(1), as we are not using any extra space.
