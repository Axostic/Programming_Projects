#include <stdio.h>

/*
Write a program that evaluates an expression.
Ex: Enter an expression: 1+2.5*3
	Value of expression: 10.5
The operands in the expression are floating point numbers;
the operators are +, -, *, and /. The expression is evaluated
left-to-right with no operator precedence.
*/

int main(void)
{
	float current, total = 0;
	char ch;

	printf("Enter an expression: ");

	scanf("%f", &total);
	while((ch = getchar()) != '\n') {
		scanf("%f", &current);

		switch(ch) {
			case '+':
				total += current;
				break;
			case '-':
				total -= current;
				break;
			case '*':
				total *= current;
				break;
			case '/':
				total /= current;
				break;
		}
	}

	printf("Value of expression: %.2f", total);

	return 0;
}