#include <stdio.h>

int largest(int a[], int n) // returns the largest integer
{
	int max = a[0];

	for(int i = 1; i < n; i++)
	{
		if(a[i] > max)
			max = a[i];
	}

	return max;
}

int average(int a[], int n) // returns the average
{
	int total = 0;

	for(int i = 0; i < n; i++)
	{
		total += a[i];
	}

	return total / n;
}

int positive(int a[], int n) // returns number of positive integers
{
	int pos_num = 0;

	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0)
			pos_num++;
	}

	return pos_num;
}

int main(void)
{
	int arr[] = {-5, 4, 9, 25, -30, 22, 1, 6};

	printf("Largest: %d\n", largest(arr, 8));
	printf("Average: %d\n", average(arr, 8));
	printf("Positive: %d\n", positive(arr, 8));

	return 0;
}