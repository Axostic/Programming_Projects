#include <stdio.h>

/*
Write a program that asks the user to enter a U.S. dollar amount
and then shows how to pay that amount using the smallest number
of $20, $10, $5, and $1 bills. Example:
Enter $: 93
$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 3
*/

int main(void)
{
	int amount, twenty_dbills, ten_dbills, five_dbills, one_dbills;

	printf("Enter amount: $");
	scanf("%d", &amount);

	twenty_dbills = amount / 20;
	ten_dbills = (amount-(twenty_dbills*20))/10;
	five_dbills = (amount-(twenty_dbills*20)-(ten_dbills*10))/5;
	one_dbills = (amount-(twenty_dbills*20)-(ten_dbills*10)-(five_dbills*5))/1;

	printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n",
		twenty_dbills, ten_dbills, five_dbills, one_dbills
	);

	return 0;
}