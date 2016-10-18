#include <stdio.h>

/*
Calculators, watches, and other electronic devices often rely on
seven-segment displays for numerical output. To form a digit, such devices
"turn on" some of the seven segments while leaving others "off":
 _       _   _       _   _   _   _   _
| |   |  _|  _| |_| |_  |_    | |_| |_|
|_|   | |_   _|   |  _| |_|   | |_|  _|
Suppose that we want to set up an array that remembers which segments should
be "on" for each digit. Let's number the segments as follows.
  __
5|0 |1
 |__|
4|6 |2
 |__|
  3
Here's what that array might look like, with each row representing one digit:
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, ...};
I've given you the first row of the initializer; fill in the rest.
*/

int main(void)
{
    const int segments[10][7] = {
                                {1, 1, 1, 1, 1, 1, 0}, // zero
                                {0, 1, 1, 0, 0, 0, 0}, // one
                                {1, 1, 0, 1, 1, 0, 1}, // two
                                {1, 1, 1, 1, 0, 0, 1}, // three
                                {0, 1, 1, 0, 0, 1, 1}, // four
                                {1, 0, 1, 1, 0, 1, 1}, // five
                                {1, 0, 1, 1, 1, 1, 1}, // six
                                {1, 1, 1, 0, 0, 0, 0}, // seven
                                {1, 1, 1, 1, 1, 1, 1}, // eight
                                {1, 1, 1, 1, 0, 1, 1}  // nine
                                };
    return 0;
}
