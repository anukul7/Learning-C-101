#include <stdio.h>
int main()
{
    int x = 7, y = 3, z;
    printf("Before swapping value of x is %d and value of y is %d\n", x, y);
    z = x;
    x = y;
    y = z;
    printf("After swapping value of x is %d and value of y is %d", x, y);
    return 0;
}