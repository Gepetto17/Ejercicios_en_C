#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
	printf("What should I print Mr.?: ");
	char a[51]; 
	scanf("%50[^\n]", a);
	printf("%s\n", a);
	
	int count = strlen(a);
	printf("The character count of your string is %d.\n", count);
	printf("The size of your string is %d.", sizeof(a));

	return 0;
}
