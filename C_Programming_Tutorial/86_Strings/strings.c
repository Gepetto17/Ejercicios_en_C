#include <stdio.h>
#include <stdbool.h>

int main()
{
	//char a[] = "hello"; This works because the size of the string (5+1 for the '\0') is taken from the string itself at compile time. IT IS STATICALLY WRITTEN.
	printf("What should I print Mr.?: ");
	//scanf("%[^\n]s", a); This scans a string till the first "enter"='\n'.
	char a[51]; // This buffers memory for a 50 characters long string and a null ('\0') character at the end.
	scanf("%50[^\n]", a); // This takes only the first 50 characters till the first line jump and the null character will be add automatically.
			      // NOTICE THAT, FOR STRINGS, WE PASS THE VARIABLE OF THE STRING AND NOT THE ADDRESS ('a' instead of '&a').
	printf("%s\n", a);
	
	int count = 0;
	while (a[count] != '\0')
	{
		count++;
	}
	printf("The character count of your string is %d.\n", count);
	printf("The size of your string is %d.", sizeof(a));

	return 0;
}
