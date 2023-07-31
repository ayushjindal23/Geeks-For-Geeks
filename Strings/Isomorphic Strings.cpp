bool areIsomorphic(string str1, string str2)
{
    // Check if the lengths of both strings are equal
    if (str1.length() != str2.length()) return false;

    // Create an unordered_map to store the character mappings from str1 to str2
    unordered_map<char, char> mp;

    // Iterate through each character of str1
    for (int i = 0; i < str1.length(); i++)
    {
        // If the character str1[i] is already in the map
        if (mp.find(str1[i]) != mp.end())
        {
            // Check if the corresponding mapped character mp[str1[i]] is equal to str2[i]
            if (mp[str1[i]] != str2[i]) return false;
        }
        // If str1[i] is not in the map, add the character mapping str1[i] -> str2[i]
        else
        {
            mp[str1[i]] = str2[i];
        }
    }

    // Check whether two different keys have the same value
    unordered_set<char> st;

    // Iterate through each key-value pair in the map mp
    for (auto m : mp)
    {
        // If the mapped character m.second (value) is already in the set st, it means there is a conflict
        if (st.find(m.second) != st.end()) return false;

        // Otherwise, add the mapped character m.second to the set
        st.insert(m.second);
    }

    // If both checks passed, the strings are isomorphic, so return true
    return true;
}

// Time Complexity: O(N), traversing over the string of size N.
// he space complexity is O(min(N, M)), where N is the length of str1 and M is the length of str2.
// The space is used to store the character mappings in the charCount unordered map. In the worst case, if both strings have unique characters, t
// he space complexity would be O(min(N, M)) to store those character mappings. 
// However, if both strings have the same characters, the space complexity would be O(1) since the charCount will only contain one mapping.
