#include <stdio.h>
#include <stdbool.h>

/*
Repeat Exercise 3, but this time use a designated initializer.
Make the initializer as short as possible.
*/

int main(void)
{
    bool weekend[7] = {true, [6] = true}; // All other elements default to zero (false boolean)

    printf("%d %d %d %d %d %d %d\n", // confirm the array initializes correctly, yes, I KNOW I could use a loop here.
        weekend[0], weekend[1], weekend[2], weekend[3], weekend[4], weekend[5], weekend[6]
    );

    return 0;
}
