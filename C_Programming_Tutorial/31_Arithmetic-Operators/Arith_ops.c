#include <stdio.h>

int main(){
	double x = 10.0 / (3.0 / 3.0); // Ordnung muss sein.
	double y = 10.0 / 3.0 / 3.0;
	printf("10.0 / (3.0 / 3.0) = %f\n",x);
	printf("10.0 / 3.0 / 3.0 = %f\n",y);
	int z = 5 % 2; // Modulus operator.
	printf("5 % 2 = %i",z);
	return 0;
}
