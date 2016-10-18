#include <stdio.h>

/*
Using the shortcuts descirbed in Section 8.2, shrink the intitializer for the
segments array (Exercise 6) as much as you can.
*/

int main(void)
{
    const int segments[10][7] = {
                                {1, 1, 1, 1, 1, 1}, // zero
                                {0, 1, 1}, // one
                                {1, 1, 0, 1, 1, 0, 1}, // two
                                {1, 1, 1, 1, 0, 0, 1}, // three
                                {0, 1, 1, 0, 0, 1, 1}, // four
                                {1, 0, 1, 1, 0, 1, 1}, // five
                                {1, 0, 1, 1, 1, 1, 1}, // six
                                {1, 1, 1}, // seven
                                {1, 1, 1, 1, 1, 1, 1}, // eight
                                {1, 1, 1, 1, 0, 1, 1}  // nine
                                };
                                // you could also use the designated initializers.
    
    return 0;
}
