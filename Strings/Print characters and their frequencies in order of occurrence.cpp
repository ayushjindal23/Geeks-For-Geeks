#include <iostream>
#include <string>
using namespace std;

// Function to print characters and their frequencies in the input string.
void printCharWithFreq(string str)
{
    int arr[26] = {0}; // Initialize an array to store frequencies of characters. Size 26 for lowercase English alphabets.

    // Count the frequencies of characters in the input string.
    for (int i = 0; i < str.length(); i++) {
        arr[str[i] - 'a']++; // Increment the frequency count of the character at index str[i] - 'a'.
    }

    // Iterate through the frequency array to print characters and their frequencies.
    for (int i = 0; i < 26; i++) {
        if (arr[i] > 0) {
            cout << (char)(i + 'a') << " " << arr[i] << endl; // Print the character and its frequency.
        }
    }
}

int main()
{
    string str = "geeksforgeeks"; // Input string to test the function.
    printCharWithFreq(str); // Call the function to print characters and their frequencies.
    return 0;
}
