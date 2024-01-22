#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // This has the rand() function.
#include <time.h>

/*
The user has to guess a number from 0 to 5
It outputs whether or not the user is correct.
*/


int main()
{
	// Generate a pseudo ramdon number. This gets seeded with data and outputs a result.
	// We'll use the clock as seed.
	srand(time(NULL));
	int randonNumber = rand() % 6;
	//printf("%d",randonNumber);
	printf("Guess a number from 0 to 5: ");
	int guess;
	scanf("%i", &guess);
	if(guess == randonNumber)
	{
		printf("You win!");
	}
	else
	{
		printf("You lose! The number was: %i", randonNumber);
	};
	return 0;
}
