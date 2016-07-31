#include <stdio.h>

/*
Write a program that formats product information entered by the user.
*/

int main(void)
{
	int item_number, purchase_day, purchase_month, purchase_year;
	float unit_price;

	printf("Enter item number: ");
	scanf("%d", &item_number);

	printf("Enter unit price: $");
	scanf("%f", &unit_price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &purchase_month, &purchase_day, &purchase_year);

	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
	printf("%d\t\t$%7.2f\t%.2d/%.2d/%.4d", item_number, unit_price, purchase_month, purchase_day, purchase_year);

	return 0;
}