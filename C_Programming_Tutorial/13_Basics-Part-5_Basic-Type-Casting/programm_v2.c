#include <stdio.h>

// https://www.youtube.com/watch?v=i7zM3m-J_jk&list=WL&index=2&t=2s&ab_channel=CalebCurry


int main(){
	printf("The number of eggs for the day: ");
	int eggs;
	scanf("%i", &eggs);
	double dozen = eggs/12.0;
	printf("You have %f dozen eggs.\n", dozen);
	return 0;
}
