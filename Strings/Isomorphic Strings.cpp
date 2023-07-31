bool areIsomorphic(string s, string t)
{
    if (s.length() != t.length()) return false;

    unordered_map<char, char> mp;
    unordered_set<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        // If the character s[i] is already in the map
        if (mp.find(s[i]) != mp.end())
        {
            // Check if the corresponding mapped character mp[s[i]] is equal to t[i]
            if (mp[s[i]] != t[i]) return false;
        }
        // If s[i] is not in the map
        else
        {
            // Check if t[i] is already mapped to some other character
            if (st.find(t[i]) != st.end()) return false;

            // Add the character mapping s[i] -> t[i]
            mp[s[i]] = t[i];
            st.insert(t[i]);
        }
    }

    // If all checks passed, the strings are isomorphic, so return true
    return true;
}

// Time Complexity: O(N), traversing over the string of size N.
// he space complexity is O(min(N, M)), where N is the length of str1 and M is the length of str2.
// The space is used to store the character mappings in the charCount unordered map. In the worst case, if both strings have unique characters, t
// he space complexity would be O(min(N, M)) to store those character mappings. 
// However, if both strings have the same characters, the space complexity would be O(1) since the charCount will only contain one mapping.
