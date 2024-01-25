#include <stdio.h>

/*
structs data types are thought to encapsulate many variables into a single one.
They must be declared OUTSIDE of main.
*/
typedef struct
{
	int length;
	int width;
} rectangle;

typedef struct
{
	int x;
	int y;
} position;

typedef struct
{
	char owner[31];
	rectangle block;
	position pos;
} buildingPlan;

int main()
{
	buildingPlan myHouse = {"Guillermo Perna Perna", {29, 11}, {10, 32}}; // This is how we declare and initialize a struct.
	printf("The owner is %s. The house has %d square meters and is located at the coordinates (%d, %d).\n",
			myHouse.owner,
			myHouse.block.length*myHouse.block.width,
			myHouse.pos.x,
			myHouse.pos.y
	);
	// We can also make an array of structs. For example:
	position path[] = {{0,1}, {0,2}, {1,2}, {2,2}};
	int size = 4;
	printf("The size of the path is: %d.\n", sizeof(path));
	for (int i = 0; i < size; i++)
	{
		printf("%d %d\n", path[i].x, path[i].y);
	};
	// If we want to referenciate the pointer of a struct we have to do it like always:
	buildingPlan *structPointer = &myHouse;
	// But when we want to access the values at this pointer it is a bit different:
	printf("Position x: %d.\n", structPointer->pos.x);
	return 0;
}
