#include <stdio.h>

int main(void)
{
	/*
	// int 100_bottles;
	// Illegal because identifiers must begin with a underscore or
	// letter, however they may have numbers after that.
	// Ex. Legal: _8675309
	*/
	int _8675309; // legal
	int _100_bottles; // legal
	int one__hundred__bottles; // legal
	int bottles_by_the_hundred_; // legal

	return 0;
}