#include <stdio.h>

/*
The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, ..., where each number is
he sum of the two preceding numbers. Write a program fragment that declares
an array named fib_numbers of length 40 and fills the array with the first
40 Fibonacci numbers, Hint: Fill in the first two numbers individually, then
use a loop to compute the remaining numbers.
*/

int main(void)
{
    int fib_numbers[40] = {0, 1};

    for(int i = 2; i < 40; i++)
        fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];

    for(int i = 0; i < 40; i++)
        (i % 10 == 0 && i != 0) ? printf("%d\n", fib_numbers[i]) : printf("%d ", fib_numbers[i]);

    printf("\n");

    return 0;
}
