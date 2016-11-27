#include <stdio.h>
#include <stdbool.h>

bool has_zero(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] == 0)
			return true;
		//else
		//	return false;
	}
	return false; // this works
}

// the problem with has_zero(...) is that the function will always return
// on the first loop iteration. To fix this with the desired results, remove
// the "else" portion and place "return false;" after the for loop.

int main(void)
{
	return 0;
}