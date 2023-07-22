int firstNonRepeating(string str) {
    int fi[256]; // frequency array
 
    for(int i = 0; i<256; i++)
    {
        fi[i] = -1; // initalizing every index of frequency array with -1.
    }
 
    // sets all repeating characters to -2 and non-repeating characters
   // contain the index where they occur
    for(int i = 0; i<str.length(); i++) 
    {
        if(fi[str[i]] == -1) 
        {
            fi[str[i]] = i;
        }
        else 
        {
            fi[str[i]] = -2;
        }
    }
 
    // If this character is not -1 or -2 then it
    // means that this character occurred only once
    // so find the min index of all characters that
    // occur only once, that's our first index
    int res = INT_MAX;
 
    for(int i = 0; i<256; i++) 
    {
        if(fi[i] >= 0)
        {
            res = min(res, fi[i]); // finding the minimum index of 
            //non-repeating character.
        }
    }
     
    // if res remains INT_MAX, it means there are no
    // characters that repeat only once or the string is empty
    if(res == INT_MAX)
    {
        return -1;
    }
    return res;
}
