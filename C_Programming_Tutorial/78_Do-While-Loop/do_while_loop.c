#include <stdio.h>
#include <stdbool.h>

int main()
{
	// As always, we need an initialization, a comparision and an update.
	
	/*
	Initialization
	do
	{
		code;
		update;
	} while (comparision)
	*/
	int input;
	do
	{
		printf("Please enter a number 0 - 9: ");
		scanf("%i", &input);
	} while (input < 0 || input > 9);
	return 0;
}
