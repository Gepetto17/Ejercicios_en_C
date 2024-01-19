#include <stdio.h>

int main(){
	int slices = 17;
	int people = 2;

	double slicesProPerson = (double) slices / people; // This double typecasts only "slices".
	double slicesV2 = (double) (slices / people); // This double typecasts (slices/people) which is an integer divison.
	printf("%f, %f.\n", slicesProPerson, slicesV2);
	return 0;
}
