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
	// also..
	typedef int64_t Int64;
	typedef __int128_t Int128;

	printf("Size of integers in bytes:\n");
	printf("Size of Int8: %zu\n", sizeof(Int8));
	printf("Size of Int16: %zu\n", sizeof(Int16));
	printf("Size of Int32: %zu\n", sizeof(Int32));
	// also..
	printf("Size of Int64: %zu\n", sizeof(Int64));
	printf("Size of Int128: %zu\n", sizeof(Int128));


	return 0;
}