#include <stdio.h>

int main()
{	
	printf("Till what number should we count?: ");
	int i = 0;
	scanf("%i", &i);
	int j = 0;
	while(j < i)
	{
	if (j == 10){printf("We made it to ten!\n");};
	j++;
	printf("%d\n",j);
	}
	return 0;
}
