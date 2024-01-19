#include <stdio.h>
#include <stdbool.h>

int main(){
	bool thisIsCamel;
	thisIsCamel = true; // 0 is 'false'. All other numbers are 'true'.
	bool camelIsCool = false;
	bool orStatement = (thisIsCamel || camelIsCool);
	bool andStatement = (thisIsCamel && camelIsCool);
	printf("Or: %i\nAnd: %i", orStatement, andStatement);
	return 0;
}
