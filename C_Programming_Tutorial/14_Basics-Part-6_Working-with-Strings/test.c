#include <stdio.h>

int main(){
	char name[256]; // ATTENTION! A fixed string buffer will cause a segmentation fault when overflowed.
	printf("What's your name? :)\n");
	scanf("%i", name);
	printf("Hello %s!\n",name);
	return 0;
}
