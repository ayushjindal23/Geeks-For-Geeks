// Function to find the substring containing
// all digits from the beginning until the
// rightmost odd digit (inclusive)
string maxOdd(string s)
{
    // Iterate through the string from the end
    // (rightmost character) to the beginning
    // (leftmost character) using a loop.
    for (int i = s.length() - 1; i >= 0; i--) {

        // Check if the current character s[i] is odd
        // (i.e., not divisible by 2) by checking
        // if s[i] % 2 != 0.
        if (s[i] % 2 != 0) {

            // If an odd character is found,
            // return the substring from the beginning
            // until the rightmost odd digit (inclusive).
            string s1 = s.substr(0, i + 1);
            return s1;
        }
    }

    // If no odd character is found during the loop,
    // return an empty string to indicate that there
    // are no odd digits in the input string.
    return "";
}

