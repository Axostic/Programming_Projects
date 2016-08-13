#include <stdio.h>

/*
Write a program that takes four integers as input and
calculates the largest and smallest of the four.
*/

int main(void)
{
	int i1, i2, i3, i4, placeholder = 0;

	printf("Enter Four Integers: ");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);


	if (i1 > i2) { 
  		placeholder = i1;
  		i1 = i2;
  		i2 = placeholder; 
  		// i1 and i2 values switch
	}

	if (i3 > i4) { 
  		placeholder = i3;
  		i3 = i4;
  		i4 = placeholder;
  		// i3 and i4 values switch
	}

	printf("Largest: %d\n", i2 > i4 ? i2 : i4);
	printf("Smallest: %d\n", i1 > i3 ? i3 : i1);


	return 0;
}