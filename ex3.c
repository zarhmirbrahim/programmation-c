#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 5
#define M 50

int main()
{
	char TABCH[N][M];
	int i, j;
	for (i = 0; i < 5; i++) {
		printf("entrz le mot N %d : ", i + 1);
		scanf("%s", TABCH[i]);
	}
	///////////////////////////////
	printf("l'affichage avant l'inverse :\n");
	for (i = 0; i < 5; i++) {
		puts(TABCH[i]);
	}
	///////////////////////////////
	char tmp;
	for (i = 0; i < N; ++i) {
		int str_size = strlen(TABCH[i]);
		for (j = 0; j < str_size / 2; j++) {
			tmp = TABCH[i][j];
			TABCH[i][j] = TABCH[i][str_size - 1 - j];
			TABCH[i][str_size - 1 - j] = tmp;
		}
	}
	///////////////////////////////////////
	printf("l'affichage apres l'inverse :\n");
	for (i = 0; i < 5; i++) {
		printf("%s\n", TABCH[i]);
	}

	return 0;
}
