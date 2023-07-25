string reverseString(string s)
{
  // Create two empty strings, ans and temp.
  string ans = "";
  string temp = "";

  // Iterate through the characters of the original string, s.
  for (int i = 0; i < s.length(); i++)
  {
    // If the current character is a space, append temp to ans and clear temp.
    char ch = s[i];
    if (ch == ' ')
    {
      if (temp != "")
      {
        ans = temp + " " + ans;
      }
      temp = "";
    }
    // Otherwise, append the current character to temp.
    else
    {
      temp += ch;
    }
  }

  // If temp is not empty, append it to ans.
  if (temp != "")
  {
    ans = temp + " " + ans;
  }

  // If the length of ans is greater than 0 and the last character is a space,
  // remove the last character from ans.
  if (ans.length() > 0 && ans[ans.length() - 1] == ' ')
  {
    ans = ans.substr(0, ans.length() - 1);
  }

  // Return ans.
  return ans;
}
