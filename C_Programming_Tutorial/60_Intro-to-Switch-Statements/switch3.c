#include <stdio.h>

int main(){

	int level;
	printf("In what case would you like to enter honey?\n");
	scanf("%d", &level);
	switch(level)
	{
		case 0:
			//printf("This is case 0.");
			//break;
		//case 1:
			//printf("This is case 1.");
			//break;
		case 2: printf("Case under 3.");
			break;
		case 3:
			printf("This is case 3.");
			break;
		default:
			printf("There's no such a case.");
			break;
	}
	return 0;
}
