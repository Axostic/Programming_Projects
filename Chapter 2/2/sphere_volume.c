#include <stdio.h>

#define RADIUS 10
#define PI 3.141592f
#define ARROW_FACTOR (4.0f/3.0f)

/*
Write a program that computes the volume of a sphere with a 10-meter
radius, using the formula: v = 4/3*pi*r^3. Write the fraction 4/3 as
4.0f/3.0f (Try writing it as 4/3. What happens?) Hint: C Doesn't have
any exponentiation operator, so you will need to multiply r by itself
twice {ERROR: MULTIPLY radius THREE TIMES, NOT TWO} to compute r^3.

If you make the arrow factor division by integers, the answer is
stripped of all decimal places and results to One (1). Therefore, the
final answer is wrong.
*/

int main(void)
{
	printf("Volume of Sphere: %.2fm^3\n",
		ARROW_FACTOR*PI*(RADIUS*RADIUS*RADIUS)
	);

	return 0;
}