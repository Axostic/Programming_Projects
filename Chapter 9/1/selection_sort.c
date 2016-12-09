#include <stdio.h>

/*
Write a program that asks the user to enter a series of integers (which it stores in an array),
then sorts the integers by calling the function selection_sort. When given an array with n elements,
selection_sort must do the following:
1. Search the array for the largest element, then move it to the last position in the array
2. Call itself recursively to sort the first n - 1 elements of the array.
*/

void selection_sort(int len, int ent_int[len])
{
	if(len == 0)
	{
		return;
	}

	int largest_index = 0, placeholder;

	for(int i = 0; i < len; i++) // loop to find the index of the largest number
	{
		if(ent_int[i] > ent_int[largest_index])
		{
			largest_index = i;
		}
	}

	placeholder = ent_int[len-1]; // store last value in array
	ent_int[len-1] = ent_int[largest_index]; // set last value in array to the largest number
	ent_int[largest_index] = placeholder; // set the original largest number index to the previous last value in array

	selection_sort(len-1, ent_int);
}

int main(void)
{
	int length;

	printf("How many numbers would you like to sort?: ");
	scanf("%d", &length);

	int entered_integers[length]; // VLA to setup array according to user

	printf("Enter a series of %d integers: ", length);
	for(int i = 0; i < length; i++)
	{
		scanf("%d", &entered_integers[i]);
	}


	selection_sort(length, entered_integers);


	printf("In sorted order:");
	for(int i = 0; i < length; i++)
	{
		printf(" %d", entered_integers[i]);
	}

	return 0;
}