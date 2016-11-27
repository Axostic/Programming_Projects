#include <stdio.h>
#include <ctype.h>

float compute_GPA(char grades[], int n)
{
	int i = 0;
	float total = 0.0;

	while(i < n)
	{
		switch(grades[i])
		{
			case 'A': total += 4.0; break;
			case 'B': total += 3.0; break;
			case 'C': total += 2.0; break;
			case 'D': total += 1.0; break;
			default: break;
		}

		i++;
	}

	return total / n;
}

int main(void)
{
	char gradebook[] = {'A', 'A', 'B', 'A', 'A', 'A', 'A'};

	printf("GPA: %f", compute_GPA(gradebook, 7));

	return 0;
}