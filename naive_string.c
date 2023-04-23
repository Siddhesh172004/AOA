// C program for Naive Pattern Searching algorithm
#include <stdio.h>
#include <string.h>

void search(char pat[], char txt[])
{
	int M = strlen(pat);
	int N = strlen(txt);
// printf("The value of M %d",M);
// printf("The value of N %d",N);
	/* A loop to slide pat[] one by one */
	for (int i = 0; i < (N - M)+ 1; i++) {       //  can also write <= N-M
		int j;

		/* For current index i, check for pattern match */
		for (j = 0; j < M; j++)
			if (txt[i + j] != pat[j])
				break;

		if (j
			== M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
			printf("Pattern found at index %d \n", i);
	}
}

// Driver's code
int main()
{
      char txt[100], pat[100];
     printf("*** Naive String Matching Algorithm ***\n");
    printf("Enter the String.\n");
    scanf("%s",&txt);
    printf("Enter the pattern to match.\n");
    scanf("%s",&pat);

	// Function call
	search(pat, txt);
	return 0;
}
