#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char verb[50], conjuge[6][50];

	const char* pronoms[] = { "je ", "tu ", "il ", "nous ", "vous ", "ils " };
	const char* terminaison[] = { "e", "es", "e", "ons", "ez", "ent" };

	puts("entrez un verbe");
	scanf("%s",verb);
	tolower(verb);
	int str_size = strlen(verb);
	if (verb[str_size - 2] == 'e' &&
		verb[str_size - 1] == 'r')
	{
		verb[str_size - 2] = '\0';

		for (int i = 0; i < 6; i++)
		{
			strcpy(conjuge[i], pronoms[i]);
			strcat(conjuge[i], verb);
			strcat(conjuge[i], terminaison[i]);
		}

		for (int i = 0; i < 6; i++)
			puts(conjuge[i]);
	}
	else puts("%s n'est pas au premier groupe",verb);
}