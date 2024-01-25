#include <stdio.h>

int main()
{
	int x = 5; // We declare x and initialize it as 5.
	int *pr_x = &x; // We declare a pointer to an integer and initialize it as the direction of x.
	*pr_x = 10; // We set equal to 10 the value at pr_x. Also known as "dereferencing".
	printf("The value saved at the pointer %p is %i", pr_x, x);
}
/*
It is worth noting that some variables decay to a pointer when passed to functions.
This is the case of arrays and strings. It is mainly because of the memory usage.
So, when passing an array or string to a function, we will be actually working
ON THEM and not onto a copy of them. Special care must be taken in this cases.
*/
