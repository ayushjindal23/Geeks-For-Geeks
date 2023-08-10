    int myAtoi(string s) {
            int sign = 1, base = 0, i = 0;
 
    // if whitespaces then ignore.
    while (s[i] == ' ') {
        i++;
    }
 
    // sign of number
    if (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-') {
            sign = -1;  // If the character is '-', the number is negative.
        } else {
            sign = 1;   // If the character is '+', the number is positive (or unsigned).
        }
        i++;  // Move to the next character in the string.
    }

    // checking for valid input
    while (s[i] >= '0' && s[i] <= '9') {
        // handling overflow test case
        if (base > INT_MAX / 10
            || (base == INT_MAX / 10 && s[i] - '0' > 7)) {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        base = 10 * base + (s[i] - '0');
        i++;
    }
    return base * sign;
        
    }

// Complexity Analysis:
// Time Complexity: O(n), Only one traversal of the string is needed.
// Space Complexity: O(1), As no extra space is required.
