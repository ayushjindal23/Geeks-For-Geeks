void search(char* pat, char* txt)
{
	int M = strlen(pat);
	int N = strlen(txt);

	/* A loop to slide pat[] one by one */
	for (int i = 0; i <= N - M; i++) {
		int j;

		/* For current index i, check for pattern match */
		for (j = 0; j < M; j++)
			if (txt[i + j] != pat[j])
				break;

		if (j
			== M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
			cout << "Pattern found at index " << i << endl;
	}
}

// Driver's Code
int main()
{
	char txt[] = "AABAACAADAABAAABAA";
	char pat[] = "AABA";

	// Function call
	search(pat, txt);
	return 0;
}

/*Output:
Pattern found at index 0 
Pattern found at index 9 
Pattern found at index 13 
  
Time Complexity: O(N^2)
Auxiliary Space: O(1)

 What is the best case of Naive algorithm for Pattern Searching? 
The best case occurs when the first character of the pattern is not present in the text at all.

txt[] = "AABCCAADDEE";
pat[] = "FAA";
The number of comparisons in the best case is O(N). 

What is the worst caseof Naive algorithm for Pattern Searching? 
The worst case of Naive Pattern Searching occurs in the following scenarios. 
1) When all characters of the text and pattern are the same. 

txt[] = "AAAAAAAAAAAAAAAAAA";
pat[] = "AAAAA";
2) Worst case also occurs when only the last character is different. 

txt[] = "AAAAAAAAAAAAAAAAAB";
pat[] = "AAAAB";
The number of comparisons in the worst case is O(M * (N – M + 1)). 
Although strings which have repeated characters are not likely to appear in English text, they may well occur in other applications (for example, in binary texts).*/
