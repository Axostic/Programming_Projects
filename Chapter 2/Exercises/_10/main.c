// In the dweight.c program, what spaces are essential (required)?
// lets see the dweight.c program in action. ^ Marks required space


#include <stdio.h>
//      ^

int main(void)
// ^
{
	int height = 8, length = 12, width = 10, volume;
//     ^
	volume = height * length * width;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
//                     ^
	printf("Volume (Cubic Inches): %d\n", volume);
//                ^               ^
	printf("Dimensional Weight (Pounds): %d\n", (volume + 165) / 166);
//                     ^      ^         ^


	return 0;
//        ^
}