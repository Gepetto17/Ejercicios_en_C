#include <stdio.h>

int factorial(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return(n*factorial(n-1));
	};
}

int main()
{
	printf("Your number: ");
	int i;
	scanf("%i", &i);
	printf("The factorial of %i is %i.", i, factorial(i));
	return 0;
}
