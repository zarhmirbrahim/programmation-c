#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ATaille 50
#define BTaille 50

int main()
{
	char A[5][30], B[5][30], FUS[10][30];
	
	puts("Entrez A");
	for(int i=0;i<5;++i){
		scanf("%s",A[i]);
	}
	puts("Entrez B");
	for(int i=0;i<5;++i){
		scanf("%s",B[i]);

	}
	for(int i=0;i<5;++i) {
		strcpy(FUS[i],A[i]);
	}
	for(int i=5;i<10;++i){
		strcpy(FUS[i],B[i-20]);
	}
	for(int i=0;i<10;++i){
	printf("%s\n",FUS[i]);
	}
	

	// strcpy(FUS, A);
	// strcat(FUS, B);

	//qsort(FUS, strlen(FUS), sizeof(char), &comparison);

// 	int fus_size = strlen(FUS);
// 	for (int i = 0; i < fus_size - 1; i++)
// 	{
// 		for (int j = i; j < fus_size; j++)
// 		{
// 			if (FUS[i] > FUS[j])
// 			{
// 				char tmp = FUS[i];
// 				FUS[i] = FUS[j];
// 				FUS[j] =tmp;
// 			}
// 		}
// 	}
// 	printf("%s",FUS);
return 0;
 }