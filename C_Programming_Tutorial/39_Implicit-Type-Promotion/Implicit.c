#include <stdio.h>

int main(){
	// Implicit type conversion - Promotion}
	float x = 50.0;
	printf("%f",x); // Print takes a double, so x is promoted in the printing, but not the real variable.
	return 0;
}
