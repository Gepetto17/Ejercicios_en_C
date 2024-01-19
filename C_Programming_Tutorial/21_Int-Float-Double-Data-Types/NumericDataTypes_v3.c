#include <stdio.h>

int main(){
	double dogs;
	printf("How many dogs do you have?: ");
	scanf("%lf", &dogs); // lf is how we format a double and can read scientific and decimal notation.
	// There are 'format' or 'conversion' characters that change the format of our data. They can also change the way they are printed.
	printf("%f\n%e\n%g\n", dogs, dogs, dogs); // float... it becomes double. So, there is no conversion character for double.
	return 0;
	/*
	
	Conversion characters:
	%f - Decimal notation
	%e - Scientific notation
	%g - Computer decides
		(exp < -4) || (exp > 5) -> Scientific notation
			else		-> Decimal notation
	
	*/
}
