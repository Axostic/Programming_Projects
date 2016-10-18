#include <stdio.h>

int main(void)
{
    // sizeof(a) / sizeof(a[0]) is better to use versus sizeof(a) / sizeof(type-of-element-in-a)
    // because the type of the array may be changed without breaking this expression.

    return 0;
}
