#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
	bool pizzaIsHealthy = true;
	int temp;
	printf("Do you believe in the power of pizza? (0 = false, any other = true): ");
	scanf("%d", &temp); // %d forces an integer (it doesn't accept HEX for example).
	if(temp) // temp = true as long as it is not zero.
	{
		printf("Sacred pizza.");
	}
	else
	{
		printf("Fuck off.");
	}
	return 0;
}
