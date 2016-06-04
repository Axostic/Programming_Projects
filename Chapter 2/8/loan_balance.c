#include <stdio.h>

/*
Write a program that calculates the remaining balance on a loan after
the first, second, and third monthly payments. Example:
Enter loan amount: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71
*/

int main(void)
{
	float balance, interest_rate, monthly_payment, m_interest_rate;

	printf("Enter loan amount: $");
	scanf("%f", &balance);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	m_interest_rate = interest_rate / 100 / 12;

	balance = balance - monthly_payment + balance * m_interest_rate;
	printf("\nBalance remaining after first payment: $%.2f\n", balance);
	balance = balance - monthly_payment + balance * m_interest_rate;
	printf("Balance remaining after second payment: $%.2f\n", balance);
	balance = balance - monthly_payment + balance * m_interest_rate;
	printf("Balance remaining after third payment: $%.2f\n", balance);

	return 0;
}