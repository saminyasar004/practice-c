#include <stdio.h>

#define PRINCIPAL 5000
#define YEAR 10
#define INTRATE 0.11

void main() {
	float amount;
	amount = PRINCIPAL;
	#define AUTHOR "Samin Yasar"
	for(int i = 1; i <= YEAR; i++) {
		amount = amount + (amount * INTRATE);
	}
	printf("After %d year your total interest of %d is: %8.2f\nAuthor is: %s\n", YEAR, PRINCIPAL, amount, AUTHOR);
}
