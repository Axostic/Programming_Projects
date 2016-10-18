#include <stdio.h>
#include <stdbool.h>

/*
Write a declaration of an array named weekend containing seven bool values.
Include an initializer that makes the first and last values true; all other
values should be false.
*/

int main(void)
{
    bool weekend[7] = {true, false, false, false, false, false, true}; // All other elements default to zero (false boolean)

    printf("%d %d %d %d %d %d %d\n", // confirm the array initializes correctly, yes, I KNOW I could use a loop here.
        weekend[0], weekend[1], weekend[2], weekend[3], weekend[4], weekend[5], weekend[6]
    );

    return 0;
}
