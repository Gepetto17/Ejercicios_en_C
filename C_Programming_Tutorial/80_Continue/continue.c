#include <stdio.h>

int main()
{
	int i = 1;
	while(i <= 10)
	{
		if(i == 7)
		{
			printf("7 is awesome!\n");
			i++;
			continue;
		}
		printf("%d\n", i);
		i++;
	}
	return 0;
}
