#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool check_not_prime(int p)
{
	bool pNotPrime = false;
	for(int i = 2; i<=sqrt(p); i++)
	{
		pNotPrime = (pNotPrime || ((p % i) == 0));
	}
	return pNotPrime;
}


int main()
{
	printf("What's your number?: ");
	int num;
	scanf("%d", &num);
	int howMany = 0;
	for(int i = num; i > 1; i--)
	{
		if (!check_not_prime(i)){printf("%d is prime.\n", i); howMany++;};
	};
	printf("There are %d prime numbers between 1 and %d.\n", howMany, num);
	return 0;
}
