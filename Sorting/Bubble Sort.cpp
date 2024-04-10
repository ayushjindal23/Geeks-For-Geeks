// In Bubble Sort algorithm, 

// traverse from left and compare adjacent elements and the higher one is placed at right side. 
// In this way, the largest element is moved to the rightmost end at first. 
// This process is then continued to find the second largest and place it and so on until the data is sorted.

//Basically, last element sabse phele fill hota hai

#include <iostream>  // Include the iostream library for input/output operations
using namespace std; // Use the standard namespace to avoid typing std:: before standard library functions

int main() { // Main function where the program execution starts

    int numbers[] = {13, 46, 24, 52, 20, 9}; // Initialize an array called 'numbers' with some integer values
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array 'numbers'

    for (int i = size - 1; i > 0; i--) { // Outer loop for the bubble sort algorithm
        for (int j = 0; j < i; j++) { // Inner loop to compare adjacent elements and swap if necessary
            if (numbers[j] > numbers[j + 1]) { // Compare the current element with the next element
                swap(numbers[j], numbers[j + 1]); // Swap the elements if the current element is greater than the next element
            }
        }
    }

    for (int i = 0; i < size; i++) { // Loop to print the sorted array
        cout << numbers[i] << " "; // Print each element of the sorted array followed by a space
    }

    return 0; // Return 0 to indicate successful execution of the program
}

// Time Complexity: O(N2)
// Auxiliary Space: O(1)
