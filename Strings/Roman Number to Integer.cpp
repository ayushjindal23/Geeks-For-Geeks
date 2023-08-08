#include <iostream>
using namespaces std;
#include <unordered_map>

int romanToInt(string s) {
      
        // Create an unordered_map to store the Roman numeral symbols and their corresponding decimal values
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        // Initialize a variable to hold the final decimal value of the Roman numeral
        int ans = 0;
        
        // Iterate through the characters of the input Roman numeral string
        for (int i = 0; i < s.length(); i++) {
            // If the current symbol has a smaller value than the next symbol, it represents a subtractive combination
            // e.g., "IV" represents 4, not 6
            if (m[s[i]] < m[s[i+1]]) {
                ans -= m[s[i]]; // Subtract the value of the current symbol from the answer
            }
            else {
                ans += m[s[i]]; // Add the value of the current symbol to the answer
            }
        }
        
        // Return the final decimal value of the Roman numeral
        return ans;
        
    }
int main() {
    std::cout << romanToInt("MCMIV") << std::endl;
    return 0;
}


// Output
// 1904
// Time complexity – O(N)
// Auxiliary Space – O(1)
