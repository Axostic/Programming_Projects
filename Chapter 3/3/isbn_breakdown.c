#include <stdio.h>

/*
Write a program that breaks down an ISBN number entered by the user
*/

int main(void)
{
	int gs1, group_identifier, publisher_code, item_number, check_digit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &group_identifier, &publisher_code, &item_number, &check_digit);

	printf("GS1 Prefix: %d\n", gs1);
	printf("Group Identifier: %d\n", group_identifier);
	printf("Publisher Code: %d\n", publisher_code);
	printf("Item Number: %d\n", item_number);
	printf("Check Digit: %d\n", check_digit);

	return 0;
}