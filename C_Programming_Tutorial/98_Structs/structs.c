#include <stdio.h>

/*
structs data types are thought to encapsulate many variables into a single one.
They must be declared OUTSIDE of main.
*/
struct rectangle
{
	int length;
	int width;
};

int main()
{
	struct rectangle myRect = {5, 10}; // This is how we declare and initialize a struct.
	printf("Length: %d. Width: %d.\n", myRect.length, myRect.width);
	return 0;
}
