#include <stdio.h>

/*
Modify Programming Project #8 of Chapter 2 so that it also asks the
user to enter the number of payments and then displays the balance
remaining after each of these payments.
*/

int main(void)
{
	float balance, interest_rate, monthly_payment, m_interest_rate;
	int number_of_payments;

	printf("Enter loan amount: $");
	scanf("%f", &balance);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);
	printf("Enter number of payments: ");
	scanf("%d", &number_of_payments);

	printf("\n");

	m_interest_rate = interest_rate / 100 / 12;

	for(int payment_num = 1; payment_num <= number_of_payments; payment_num++) {
		balance = balance - monthly_payment + balance * m_interest_rate;
		printf("Loan balance remaining after %d payment(s): $%.2f\n", payment_num, balance);
	}

	return 0;
}