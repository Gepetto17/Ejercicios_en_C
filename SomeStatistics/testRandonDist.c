#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Program made by Guillermo Perna as a funny excercise :)
// The idea is to run some tests over the randon distribution function with the time seeds.
// We'll check if the deviation from a constant distribution function decreases as sqrt(N) for 2<N<=10.

const int MAX = 10000;
const int num = 10;

int main()
{

	for(int j = 2; j <= num; j++)
	{
		int vals[j];
		for (int p = 0; p<= j; p++)
		{
			vals[p] = 0;
		}
		for(int i = 1; i <= MAX; i++)
		{
		//srand();
		int randomNumber = rand();
		vals[randomNumber % j]++;
		}
		for (int k = 0; k < j; k++)
		{
			printf("Val_%d = %d \t", k, vals[k]);
		}
		printf("\n");
	}
	return 0;
}
