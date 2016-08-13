#include <stdio.h>

int main(void)
{
	int score = 85;

	/*
	These following if statements will output the exact same
	grade. Spoiler alert, they do the exact same thing, just
	a little bit differently than the other.
	*/

	if(score >= 90)
		printf("A");
	else if(score >= 80)
		printf("B");
	else if(score >= 70)
		printf("C");
	else if(score >= 60)
		printf("D");
	else
		printf("F");

	if(score < 60)
		printf("F");
	else if(score < 70)
		printf("D");
	else if(score < 80)
		printf("C");
	else if(score < 90)
		printf("B");
	else
		printf("A");

	return 0;
}