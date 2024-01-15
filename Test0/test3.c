#include <stdio.h>

int main()
{
	float radius;
	printf("Hey sweety, please type in the radius of your circumference: ");
	scanf("%f", &radius); // Input function. The first argument is the format string. The second argument is the variable where it'll be stored.
			      // & calls the address-of operator.
	printf("The radius is %f.\n",radius);
	float area = 3.141592*radius*radius;
	printf("The area of the circle is %f.\n",area);
	float volume = (4.0/3.0)*3.141592*radius*radius*radius;
	printf("The volume of the sphere is %f.\n",volume);



	return 0;
}
