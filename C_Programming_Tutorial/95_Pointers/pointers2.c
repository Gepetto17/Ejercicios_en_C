#include <stdio.h>

void mult2(int *x)
{
	*x *= 2;
	return;
}

/*
In the previous function we pass the arguments by pointer instead of by value.
That means that the changes will be made in the memory, i.e., the variable will change.
In the case of passing by value, the operands will act over a copy of the value of the variable.
Because of this, the function is of void type and it receives a pointer to an integer as input.
*/

int main()
{
	printf("What integer should we double?: ");
	int x;
	scanf("%i", &x);
	mult2(&x);
	printf("The double is %i.", x);
	return 0;
}
