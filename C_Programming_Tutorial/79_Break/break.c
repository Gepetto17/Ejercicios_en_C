#include <stdio.h>

int main()
{
	printf("How much numbers should I print?: ");
	int j;
	scanf("%d", &j);
	int i = 1;
	while(i <= j)
	{
		if (i == 70)
		{
			printf("I don't want to work that much. Till 69 should be sufficient :)");
			break;
		};
		printf("%d\n", i);
		i++;
	}
	return 0;
}
