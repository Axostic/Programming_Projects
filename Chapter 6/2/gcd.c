#include <stdio.h>

/*
Write a program that accepts two integers and outputs the
greatest common divisor (GCD) of the two.
Euclidean Algorithm Psuedocode
while b != 0
       t = b; 
       b = a % b; 
       a = t; 
    return a;
*/

int main(void)
{
	int a, b, c;

	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	while(b != 0) {
		c = b;
		b = a % b;
		a = c;
	}

	printf("Greatest Common Divisor: %d", a);

	return 0;
}