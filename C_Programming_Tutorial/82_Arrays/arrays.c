#include <stdio.h>

int main()
{
	printf("Where should we start?: ");
	int start;
	scanf("%d", &start);
	printf("And how many characters should I print?: ");
	int stop;
	scanf("%d", &stop);
	char letters[stop];
	for (int i = start; i < start + stop; i++)
	{
		letters[i-start] = (char) i;
		printf("%c ", i);
	};
	

	// int numbers[] = {0, 3, 0, 3, 4, 5, 6}; // This way, the compiler decides the size.
	
	
	// Multidimensional arrays:
	/*
	int staticMatrix[4][5];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			staticMatrix[i][j] = i*j;
			//printf("El elemento (%d,%d) vale %d.\n", i, j, staticMatrix[i][j]);
			printf("%d ",staticMatrix[i][j]);
		}
		printf("\n");
	}
	*/
	return 0;
}
