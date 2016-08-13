#include <stdio.h>

/*
Rewrite the broker.c program so as to ask the user for the number
of shares and the PPC, as well as the commission
prices of a rival brokerage.
*/

int main(void)
{
	float our_commission = 0.0f, rival_commission = 0.0f, value = 0.0f, pps = 0.0f;
	int shares = 0;

	printf("Enter the number of shares: ");
	scanf("%d", &shares);
	printf("Enter the Price-Per-Share (PPS): $");
	scanf("%f", &pps);

	value = shares * pps;

	if (value < 2500.00f)
		our_commission = 30.00f + 0.017f * value;
	else if (value < 6250.00f)
		our_commission = 56.00f + 0.0066f * value;
	else if (value < 20000)
		our_commission = 76.00f + 0.0034f * value;
	else if (value < 50000)
		our_commission = 100.00f + 0.0022f * value;
	else if (value < 500000)
		our_commission = 155.00f + 0.0011f * value;
	else
		our_commission = 255.00f + 0.0009 * value;

	if (our_commission < 39.00f)
		our_commission = 39.00f;

	if(shares < 2000)
		rival_commission = 33.00f + 0.03 * shares;
	else if (shares >= 2000)
		rival_commission = 33.00f + 0.02 * shares;

	printf("Our Commission\tRival Commission\n\n$%-14.2f\t$%-16.2f", our_commission, rival_commission);

	return 0;
}