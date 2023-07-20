#include <iostream>
#include <string>
using namespace std;

// Function to check if the given string is a palindrome.
bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;

    // Compare characters from the beginning and end of the string until the middle.
    while (left < right) {
        if (str[left] != str[right]) {
            return false; // If any characters don't match, the string is not a palindrome.
        }
        left++; // Move left pointer towards right.
        right--; // Move right pointer towards left.
    }

    return true; // If the loop completes without finding any mismatch, the string is a palindrome.
}

int main() {
    string str = "ABCDCBA"; // Sample input string.
    
    // Call the isPalindrome function to check if the string is a palindrome.
    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
