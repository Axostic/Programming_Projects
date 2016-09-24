#include <stdio.h>

int main(void)
{
	/*
		Use typedef to create types named Int8, Int16, Int32.
		Define them so they represent 8-bit, 16-bit, and 32-bit
		integers on your machine.

	*/
	typedef int8_t Int8;
	typedef int16_t Int16;
	typedef int32_t Int32;

	printf("Size of Int8: %zu\n", sizeof(Int8));
	printf("Size of Int16: %zu\n", sizeof(Int16));
	printf("Size of Int32: %zu\n", sizeof(Int32));


	return 0;
}