#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_next(const char *str, const char **begin, const char **end)
{
	// je	suis
	// brahim
	//   ^<---
	*begin = str;
	while (*str != '\0')
	{
		switch (*str)
		{
		case ' ':
		case '\t':
		case '\n':
		{
			*end = str;
			return;
		}
		}
		++str;
	}
	*end = str;
}

void insert_dans(char *str, const char *iter, const char *end)
{
	while (iter != end)
	{
		*str = *iter;

		++iter;
		++str;
	}

	*str = '\0';
}

int main()
{
	// https://godbolt.org/z/hd38Psx3z
	char str[] = "je	suis brahim\nhhhhh";
	char tbch[100][50];
	const char *tmp = str;
	const char *begin, *end;

	
	int i = 0;
	while (begin !=end)
	{
		
		get_next(tmp, &begin, &end);

		if (begin == end)
			break;

		insert_dans(tbch[i], begin, end);
		tmp = end + 1;
		++i;
	}

	for (int x = 0; x < i; x++)
	{
		printf("%s\n",tbch[x]);
	}

	return 0;
}
