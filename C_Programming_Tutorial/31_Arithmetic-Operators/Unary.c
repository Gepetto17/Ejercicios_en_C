#include <stdio.h>

int main(){
	int money = 25;
	int bill = 15;
	//int total1 = money - bill;
	//int total2 = money - -bill;
	//int total3 = money - --bill;
	++bill; // Increment operator.
	--money; // Decrement operator
	int output = bill++; // This increments bill by one AFTER asigning the OLD value of bill to output. So output will be bill-1.
	
	//printf("Total1 = %i;  Total3 = %i.\n", total1, total2);
	printf("First case: Money=%i, Output=%i, Bill=%i\n", money, output, bill);
	output = ++bill;
	printf("Second case: Money=%i, Output=%i, Bill=%i\n", money, output, bill);
	return 0;
}
