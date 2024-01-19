#include <math.h>
#include <stdio.h>

// Challenge consists in creating a programm that takes two doubles as inputs,
// calculates the hypotenuse of a right triangle and outputs it.

int main(){
	double a;
	double b;
	printf("Primer cateto: ");
	scanf("%lf", &a);
	printf("Segundo cateto: ");
	scanf("%lf", &b);
	double hip_sqr = pow(a,2) + pow(b,2);
	double hip = sqrt(hip_sqr);
	printf("La hipotenusa es: %f", hip);
	return 0;
}
