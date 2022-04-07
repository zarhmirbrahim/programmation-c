#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5
#define M 50

int main()
{
	char A[5][30], B[5][30], FUS[10][30], tmp[30];

	// aaezeo eaza
	puts("\nA:");
	for (int i = 0; i < 5; i++)
	{
		fgets(A[i], 30, stdin);
	}

	puts("\nB:");
	for (int i = 0; i < 5; i++)
	{
		fgets(B[i], 30, stdin);
	}

	for (int i = 0; i < N + M; i++)
	{
		strcpy(FUS[i], (i < N) ? A[i] : B[i - M]);
	}

	for (int i = 0; i < N + M; i++)
	{
		for (int j = i + 1; j < N + M; ++j)
		{
			if (strcmp(FUS[i], FUS[j]) > 0)
			{
				strcpy(tmp, FUS[i]);
				strcpy(FUS[i], FUS[j]);
				strcpy(FUS[j], tmp);
			}
		}
	}

	puts("\nFUS:");
	for (int i = 0; i < N + M; i++)
	{
		fputs(FUS[i], stdout);
	}

	
	return 0;
}
