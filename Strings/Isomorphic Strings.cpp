bool isIsomorphic(string s, string t) {
    unordered_map<char, char> m;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        char charS = s[i];
        char charT = t[i];

        // If charS is already present in the map
        if (m.find(charS) != m.end()) {
            // Check if the mapping is valid
            if (m[charS] != charT)
                return false;
        } else {
            // Check if charT is already mapped to some other character
            for (auto it = m.begin(); it != m.end(); it++) {
                if (it.second == charT)
                    return false;
            }
            // Add the mapping to the map
            m[charS] = charT;
        }
    }

    return true;
}

// Time Complexity: O(N), traversing over the string of size N.
// he space complexity is O(min(N, M)), where N is the length of str1 and M is the length of str2.
// The space is used to store the character mappings in the charCount unordered map. In the worst case, if both strings have unique characters, t
// he space complexity would be O(min(N, M)) to store those character mappings. 
// However, if both strings have the same characters, the space complexity would be O(1) since the charCount will only contain one mapping.
