/* Instructions: (1) Condense dweight.c by replacing the assignments to 
// height, length, and width with initializers. (2) Remove the weight
// variable, instead calculating (volume+165) / 166 within the last
// printf function call.
*/
#include <stdio.h>

int main(void)
{
	int height = 8, length = 12, width = 10, volume;

	volume = height * length * width;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (Cubic Inches): %d\n", volume);
	printf("Dimensional Weight (Pounds): %d\n", (volume + 165) / 166);

	return 0;
}